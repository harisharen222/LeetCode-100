class Solution {
public:
    string removeOccurrences(string s, string part) {
        int m = part.length();
        while(s.length() > 0 && s.find(part) < s.length()){
            s.erase((s.find(part)),m);
        }
        return s;
    }
};