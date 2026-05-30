class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int n = s.length();
        int i = n-1;
        
        while( s[i] == ' ' ){ //to remove trailing spaces
            i--;
        }
        int j = i;

        while( i>=0 && j>=0 ){
            if( i>=0 && s[i] != ' '){
                i--;
                continue;
            }
            string sub = s.substr(i+1, j-i);
            if(result.length() > 0){
                
                result += " ";
            }
            result += sub;
            
            j = i;
            while(j>=0 && s[j] == ' ' ){
                j--;
            }
            i = j;
        }
        string sub = s.substr(i+1, j-i);
        if(sub.length() > 0){
            if(result.length() > 0) result += " ";
        }
        result += sub;
        



        return result;

    }
};