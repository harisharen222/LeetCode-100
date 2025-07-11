class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        unordered_set<char>s1,s2;
        for(char c : word1){
            freq1[c]++;
            s1.insert(c);
        }
        for(char c : word2){
            freq2[c]++;
            s2.insert(c);
        }

        if(s1 != s2)    return false;
        vector<int> f1, f2;
        for (auto& [_, count] : freq1) f1.push_back(count);
        for (auto& [_, count] : freq2) f2.push_back(count);
        sort(f1.begin(), f1.end());
        sort(f2.begin(), f2.end());
        
        return f1==f2;
    }
};