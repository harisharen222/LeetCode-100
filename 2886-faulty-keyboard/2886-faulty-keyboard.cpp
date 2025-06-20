class Solution {
public:
    string finalString(string s) {
        int st = 0;
        int end = 0;
        string result = "";
        while(end < s.length()){
            if(s[end] == 'i'){
                reverse(s.begin()+st,s.begin()+end);
                s.erase(s.begin()+end);
            }
            else    end++;
        }

        return s;
    }
};