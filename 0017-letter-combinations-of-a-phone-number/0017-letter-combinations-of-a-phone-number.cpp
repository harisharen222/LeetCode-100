class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits == "")    return {};
        unordered_map<char, string> phone = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        vector<string> result{""};
        for(char digit : digits){
            vector<string> temp;
            for(string s : result){
                for(char c : phone[digit]){
                    temp.push_back(s + c);
                }
            }
            result = temp;
        }
        return result;
    }
};