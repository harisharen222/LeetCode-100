class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int i = 0;
        int j = cols-1;
        while(i>=0 && j>=0 ){
            if(matrix[i][j] == target){
                return true;
            }
            if(target < matrix[i][j]){
                j--;
            }
            else{
                for(int k = i ; k < rows ; k++){
                    if(matrix[k][j] == target){
                        return true;
                    }
                }
                j--;
            }
            
        }
        return false;
    }
};