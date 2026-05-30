class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin() , s.end());
        string result = "";
        int n = s.length();
        int i = 0;
        while( i<n ){
            if(i<n && s[i] == ' '){
                i++;
                continue;
            }
            string word = "";
            while( i<n && s[i] != ' '){
                word += s[i];
                i++;
            }
            
            reverse(word.begin() , word.end());
            if(word.length() > 0){
                if(result.length() > 0){
                    result += " " + word;
                }
                else    result += word;
            }
        }
        return result;
    }
};