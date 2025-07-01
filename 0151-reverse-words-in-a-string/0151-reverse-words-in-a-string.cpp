class Solution {
public:
    string reverseWords(string s) {
        deque<string> q;
        int st = 0;
        int end = 0;
        while(st < s.length() && s[st] == ' ' ){
            st++;
            end++;
        }
        while(end < s.length()){
            if(s[end] == ' '){
                if(st<end){
                    string str = s.substr(st,end-st);
                    q.push_front(str);
                }
                while(s[end] == ' ' && end < s.length()){
                    end++;
                }
                st = end;
            }
            else    end++;    
        }
        if (st < s.length()) {
            string str = s.substr(st, end - st);
            q.push_front(str);
        }
        string result = "";
        while(!q.empty()){
            result += q.front();
            q.pop_front();
            if(!q.empty()){
                result += ' ';
            }
        }
        return result;
    }
};