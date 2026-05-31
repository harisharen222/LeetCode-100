class Solution {
public:
    string removeOccurrences(string s, string part) {
        int i=0;
        int n = s.length();
        int m = part.length();
        char ch = part[0];
        while(i < n){
            if(s[i] == ch){
                string sub = s.substr(i,m);
                if((sub.compare(part)) == 0){
                    s.erase(i,m);
                    n = s.length();
                    i=0;
                }
                else    i++;   
            }
            else    i++;
        }
        return s;
    }
};