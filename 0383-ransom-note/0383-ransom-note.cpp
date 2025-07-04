class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>freq;
        for(char s : magazine){
            freq[s]++;
        }
        for(char c : ransomNote){
            if(freq[c] == 0){
                return false;
            }
            freq[c]--;
        }
        return true;
    }
};