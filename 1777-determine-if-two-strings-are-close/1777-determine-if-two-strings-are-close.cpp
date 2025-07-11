class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        set<char>s1,s2;
        for(char c : word1){
            freq1[c]++;
            s1.insert(c);
        }
        for(char c : word2){
            freq2[c]++;
            s2.insert(c);
        }

        if(s1 != s2)    return false;
        multiset<int>m1,m2;
        for(auto& [key,value] : freq1)  m1.insert(value);
        for(auto& [key,value] : freq2)  m2.insert(value);
        
        return m1==m2;
    }
};