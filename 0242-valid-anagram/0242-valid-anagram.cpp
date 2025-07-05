class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.empty() && t.empty())  return true;
        if(s.length() != t.length())    return false;
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(char ch : s){
            freq1[ch]++;
        }
        for(char c : t){
            freq2[c]++;
        }
        return (freq1 == freq2) ? 1 : 0;
    }
};