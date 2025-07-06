class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int>result;

        int top = 0;
        int left = 0;
        int right = cols-1;
        int bottom = rows-1;

        while(top <= bottom && left <= right){
            //left to right
            for(int i = left ; i <= right ; i++){
                result.push_back(matrix[top][i]);
            }
            top++;

            //top to bottom
            if(top <= bottom && left <= right){
                for(int i=top ; i<=bottom ; i++){
                    result.push_back(matrix[i][right]);
                }
                right--;
            }
                //right to left
            if(top <= bottom && left <= right){
                for(int i=right ; i>=left ; i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
                //bottom to top
            if(top <= bottom && left <= right){
                for(int i=bottom ; i>=top ; i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};