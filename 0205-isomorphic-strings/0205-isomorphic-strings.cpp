class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> s_to_t, t_to_s;
        for (int i = 0; i < s.length(); i++) {
            char sh = s[i];
            char th = t[i];

            if (s_to_t.count(sh) && s_to_t[sh] != th) return false;
            if (t_to_s.count(th) && t_to_s[th] != sh) return false;

            s_to_t[sh] = th;
            t_to_s[th] = sh;
        }
        return true;
    }
};
