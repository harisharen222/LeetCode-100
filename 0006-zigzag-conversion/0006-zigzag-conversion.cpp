class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() <= numRows)
            return s;
        vector<string>rows(numRows);
        bool goingdown = false; 
        int curr_row = 0;
        for(char c : s){
            rows[curr_row] += c;
            if(curr_row == 0 || curr_row == numRows-1){
                goingdown = !goingdown;
            }
            if(goingdown){
                curr_row++;
            }
            else    curr_row--;
        }
        string result = "";
        for(string row : rows){
            result += row;
        }
        return result;
    }
};