class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int n = word1.length();
        int m = word2.length();
        string result = "";
        int len = n+m;
        while(i < len){
            if(i < n){
                result += word1[i];
            }
            if(i < m){
                result += word2[i];
            }
            i++;
        }
        
        return result;
    }
};