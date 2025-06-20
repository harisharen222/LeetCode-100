class Solution {
public:
    string reverseWords(string s) {
        int st = 0;
        int end = 0;
        deque<string> words;
        while(st<s.length() && s[st] == ' '){
            st++;
            end = st;
        }
        while(end < s.length()){
            if(s[end] == ' ' || s[end] == '\0'){
                string word = s.substr(st,end-st);
                words.push_front(word);
                while(end < s.length() && s[end] == ' '){
                    end++;
                }
                st = end;
            }
            end++;
        }
        if (st < s.length()) {
            string word = s.substr(st, end - st);
            words.push_front(word);
        }
        string result = "";
        while(!words.empty()){
            result += words.front();
            words.pop_front();
            if(!words.empty())   result += " ";
        }
        return result;
    }
};