class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty())   return 0;
        int n = s.length();
        int i = n-1;
        int len = 0;
        while(s[i] == ' ' && i>=0){
            i--;
        }
        while(i >= 0){
            if(s[i] == ' '){
                break;
            }
            else{
                len++;
            }
            i--;
        }
        return len;
    }
};