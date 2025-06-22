class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int st = 0;
        int end = (rows*cols)-1;
        int mid = st + (end-st)/2;
        while(st <= end){
            int element = matrix[mid/cols][mid%cols];
            if(element == target){
                return true;
            }
            if(element > target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
            mid = st + (end-st)/2;
        }
        return false;
    }
};