class Solution {
public:
    bool isVowel(char c) {
        switch (tolower((unsigned char)c)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
        }
    }
    vector<char> vowels;
    string reverseVowels(string s) {

        int i = 0;
        int n = s.length();
        int j = n - 1;
        while (i < j) {
            while(i<j && !isVowel(s[i])){
                i++;
            }
            while(i<j && !isVowel(s[j])){
                j--;
            }
            if(i < j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};