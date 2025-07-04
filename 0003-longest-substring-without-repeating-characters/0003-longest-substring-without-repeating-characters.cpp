class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>freq;
        int n = s.length();
        if(s.empty())   return 0;
        int i = 0;
        int j = 0;
        int len = INT_MIN;
        while(j < n){
            freq[s[j]]++;
            while(freq[s[j]] > 1){
                freq[s[i]]--;
                i++;
            }
            len = max(len,j-i+1);
            j++;
        }
        return len;
    }
};