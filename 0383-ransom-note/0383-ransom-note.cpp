class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq;
        if (magazine.length() < ransomNote.length())
            return false;
        for (char c : magazine) {
            freq[c]++;
        }
        for (char c : ransomNote) {
            if (freq[c] == 0)
                return false;
            freq[c]--;
        }
        return true;
    }
};