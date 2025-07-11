class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) return false;
        vector<int> freq1(26);
        vector<int> freq2(26);
        vector<bool> set1(26);
        vector<bool> set2(26);
        for(char c : word1){
            freq1[c-'a']++;
            set1[c-'a'] = true;
        }
        for(char c : word2){
            freq2[c-'a']++;
            set2[c-'a'] = true;
        }

        
        if(set1 != set2)    return false;
        
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());

        
        return freq1 == freq2;
    }
};