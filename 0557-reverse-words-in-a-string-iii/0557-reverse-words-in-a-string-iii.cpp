class Solution {
public:
    string reverseWords(string s) {
        int st = 0;
        
        int end =0;
        for(end=0 ; end<s.length() ; end++){
            if(s[end] == ' '){
                reverse(s.begin() + st,s.begin() + end);
                st = end+1;
            }
        }
        reverse(s.begin()+st,s.begin()+end);
        return s;
    }
};