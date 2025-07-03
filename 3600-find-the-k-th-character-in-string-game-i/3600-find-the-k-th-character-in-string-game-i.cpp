class Solution {
public:
    char kthCharacter(int k) {
        vector<char> chars;
        int i = 0;
        chars.push_back('a');
        while (chars.size() < k) {
            int n = chars.size();
            for (int j = 0; j < n; j++) {
                if (chars[j] == 'z')
                    chars.push_back('a');
                else
                    chars.push_back(chars[j] + 1);
            }
        }
        return chars[k - 1];
    }
};