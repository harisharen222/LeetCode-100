class Solution {
public:
    int count_of_elements(vector<vector<int>>& matrix, int val){
        int n = matrix.size();
        int count = 0;
        for(int i=0 ; i<n ; i++){
            count += upper_bound(matrix[i].begin(),matrix[i].end(),val) - matrix[i].begin();
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int m = matrix[0].size();
        int st = matrix[0][0];
        int end = matrix[n-1][m-1];
        int count = 0;
        int ans = 0;
        while(st <= end){
            int mid = st + (end-st)/2;
            count = count_of_elements(matrix,mid);
            if(count >= k){
                ans = mid;
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
};