class Solution {
public:
    bool isValid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.length()-1;
        while(st < end){
            if(!isValid(s[st])){
                st++;
                continue;
                
            } 
            if(!isValid(s[end])){
                end--;
                continue;
            }  

            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++;end--;
            
        }
        return true;
    }
};