class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> str_to_char;
        unordered_map<char, string> char_to_str;
        vector<string> words;

        // Step 1: Split string into words
        int j = 0;
        for (int i = 0; i <= s.length(); i++) {
            if (i == s.length() || s[i] == ' ') {
                words.push_back(s.substr(j, i - j));
                j = i + 1;
            }
        }

        // Step 2: Pattern length must match number of words
        if (pattern.length() != words.size()) return false;

        // Step 3: Check mapping
        for (int k = 0; k < words.size(); k++) {
            string word = words[k];
            char ch = pattern[k];

            if (str_to_char.count(word) && str_to_char[word] != ch)
                return false;
            if (char_to_str.count(ch) && char_to_str[ch] != word)
                return false;

            str_to_char[word] = ch;
            char_to_str[ch] = word;
        }

        return true;
    }
};
