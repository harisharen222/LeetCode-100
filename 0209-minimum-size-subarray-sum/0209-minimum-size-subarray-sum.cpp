class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int st = 0;
        int end = 0;
        int sum = 0;
        int min_length = INT_MAX;
        for(int end=0 ; end<n ; end++){
            
            sum += nums[end];

            while(sum >= target){
                min_length = min(min_length, end-st+1);
                sum -= nums[st];
                ++st;
            }
            
        }

        return (min_length == INT_MAX) ? 0 : min_length;
    }
};