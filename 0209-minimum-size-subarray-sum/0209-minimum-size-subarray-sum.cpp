class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int ans = INT_MAX;
        int sum = 0;
        bool flag = false;
        
        while(i < n && j < n){
            sum = sum + nums[i];
            while(sum >= target){
                ans = min(ans,(i-j+1));
                sum = sum - nums[j];
                j++;
                flag = true;
            }
            i++;
        }
        if(flag)    return ans;
        else    return 0;
    }
};