class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int i = 1;
        int j=0;
        size_t len = s.length();
        vector<string> str;
        while(i <= len){
            if(i % k == 0){
                string word = s.substr(j,k);
                str.push_back(word);
                j = i;
            }
            i++;
        }
        if(j < len){
            string last = s.substr(j);
            while(last.length() < k){
                last += fill;
            }
            str.push_back(last);
        }
        
        return str;

    }
};