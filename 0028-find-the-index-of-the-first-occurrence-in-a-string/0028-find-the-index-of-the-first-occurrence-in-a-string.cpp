class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        for(int i=0 ; i<n ; i++){
            bool match = true;
            for(int j=0 ; j<m ; j++){
                if(haystack[j+i] != needle[j]){
                    match = false;
                    break;
                }
            }
            if(match)   return i;
        }
        return -1;
    }
};