class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> ans;
        int top = 0; // starting row
        int left = 0;  // starting column
        int right = cols-1;         // ending column
        int bottom = rows-1;   // ending row

        while(top <= bottom && left <= right){
            // for the starting row ([0][0] to [0][2])
            for(int i = left ; i <= right ; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            
            // for the ending col ([0][2] to [2][2])
            for(int i = top ; i <= bottom ; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            // for the ending row ([2][2] to [2][0])
            if(bottom >= top){
                for(int i = right ; i >= left ; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // for the starting col ([2][0] to [0][0])
            if(left <= right){
                for(int i = bottom  ; i >= top ; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};