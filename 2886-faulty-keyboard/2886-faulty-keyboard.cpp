class Solution {
public:
    string finalString(string s) {
        int st = 0;
        int end = 0;
        string result = "";
        while(end < s.length()){
            if(s[end] == 'i'){
                reverse(result.begin(),result.end());
            }
            else    result += s[end];
            end++;

        }

        return result;
    }
};