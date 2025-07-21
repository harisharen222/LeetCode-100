class Solution {
public:
    string makeFancyString(string s) {
        string result = "";
        if(s.length() < 3)  return s;
        int i=0;
        int count = 1;
        while(i < s.length()){
            if(i>0 && s[i] == s[i-1]){
                count++; 
            }
            else{
                count = 1;
            }
            if(count < 3){
                result += s[i];
            }
            i++;
            
        }
        return result;
    }
};