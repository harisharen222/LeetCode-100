class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>targetmap;
        for(char c : t){
            targetmap[c]++;
        }
        unordered_map<char,int>windowmap;
        string ans = "";
        int len = INT_MAX;

        int left = 0;
        int have = 0;
        int need = targetmap.size();
        int startIndex = 0;
        for(int right=0 ; right<s.length() ; right++){
            char ch = s[right];
            windowmap[ch]++;

            if(targetmap.count(ch) && targetmap[ch] == windowmap[ch]){
                have++;
            }

            while(have == need){
                if(right-left+1 < len){
                    len = right-left+1;
                    startIndex = left;
                }

                char leftchar = s[left];
                windowmap[leftchar]--;
                if(targetmap.count(leftchar) && targetmap[leftchar] > windowmap[leftchar]){
                    have--;
                }
                left++;
            }
        }
        return (len == INT_MAX) ? "" : s.substr(startIndex,len);
    }
};