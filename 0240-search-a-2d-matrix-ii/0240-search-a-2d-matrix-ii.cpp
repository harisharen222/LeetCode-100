class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int i = 0;
        int j = cols-1;
        while(j>=0 && i<rows ){
            if(matrix[i][j] == target){
                return true;
            }
            if(target < matrix[i][j]){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};