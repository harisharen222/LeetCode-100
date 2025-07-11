class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0 ;
        int zeros = 0;
        int maxi = INT_MIN;
        for(int j=0 ; j<n ; j++){
            if(nums[j] == 0)    zeros++;
            while(zeros > k){
                if(nums[i] == 0){
                    zeros--;
                }
                i++;
            }
            maxi = max(maxi,j-i+1);
            
        }
        return maxi;
    }
};