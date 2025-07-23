class Solution {
public:
    void swap_pairs(string &s,char a, char b){
        for(char &c : s){
            if(c == a)    c = '#';
            else if(c == b)   c = a;
        }
        for (char &c : s) {
            if (c == '#') c = b;
        }
    }
    int maximumGain(string s, int x, int y) {
        int len = s.length();
        int score = 0;
        if(x < y){
            swap(x,y);
            swap_pairs(s,'b','a');
        }
        stack<char>st;
        for(char c : s){
            if(!st.empty() && st.top() == 'a' && c == 'b'){
                st.pop();
                score += x;
            }
            else{
                st.push(c);
            }
        }
        string rem = "";
        while(!st.empty()){
            rem += st.top();
            st.pop();
        }
        reverse(rem.begin(),rem.end());
        for(char c : rem){
            if(!st.empty() && st.top() == 'b' && c == 'a'){
                st.pop();
                score += y;
            }
            else{
                st.push(c);
            }
        }
        return score;
    }
};