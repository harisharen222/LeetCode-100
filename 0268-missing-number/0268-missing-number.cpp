class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int sum2 = 0;
        int m = n+1;
        for(int i=0 ; i<n ; i++){
            sum += nums[i];
        }
        for(int j=0 ; j<m ; j++){
            sum2 += j;
        }
        return sum2-sum;
    }
}; 