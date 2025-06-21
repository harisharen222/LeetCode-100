class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t len = s.find(part);
        while(len < s.length()){
            s.erase(len,part.length());
            len = s.find(part);
        }
        return s;
    }
};