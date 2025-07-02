class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length() <= numRows || numRows == 1)    return s;
        vector<string>rows(numRows);
        int curr_row = 0;
        bool goingdown = false;
        for(char c : s){
            rows[curr_row] += c;
            if(curr_row == 0 || curr_row == numRows-1){
                goingdown = !goingdown;
            }
            goingdown ? curr_row++ : curr_row--;
        }
        string result = "";
        for(string s : rows){
            result += s;
        }
        return result;

    }
};