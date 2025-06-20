class Solution {
public:
    string reverseWords(string s) {
        int st = 0;
        int end = 0;
        deque<string> dq;
        while(st < s.length() && s[st] == ' '){
            st++;
            end = st;
        }
        while(end < s.length()){
            if(s[end] == ' ' || s[end] == '\0'){
                string word = s.substr(st,end-st);
                dq.push_front(word);
                while(end < s.length() && s[end] == ' '){
                    end++;
                    st = end;
                }
            }
            end++;
        }
        if(st < s.length()){
            string word = s.substr(st,end-st);
            dq.push_front(word);
        }
        string result = "";
        while(!dq.empty()){
            result += dq.front();
            dq.pop_front();
            if(!dq.empty()) result += " ";
        }
        return result;
    }
};