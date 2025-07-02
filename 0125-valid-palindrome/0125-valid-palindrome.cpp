class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty())   return true;
        int n = s.length();
        int i =0;
        int j = n-1;
        while(i<j && i < n){
            while(i<j && !isalnum(s[i]))  i++;
            while(i<j && !isalnum(s[j]))  j--;
            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};