class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int zeros = 0;
        int maxi = 0;
        for(int right = 0; right < n ; right++){
            if(nums[right] == 0)    zeros++;
            while(zeros > 1){
                if(nums[left] == 0){
                    zeros--;
                }
                left++;
            }
            maxi = max(maxi,right-left);
            if(maxi == n) return n - 1;

        }
        return maxi;
    }
};