class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int i=0;
        while(i < nums.size()-2){
            if(i > 0 && nums[i] == nums[i-1]){
                i++;
                continue;
            }
            int left = i+1;
            int right = (nums.size())-1;
            while(left < right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum == 0){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    while(left<right && nums[left] == nums[left+1]) left++;
                    while(left<right && nums[right] == nums[right-1])   right--;
                    left++;
                    right--;
                }
                else if(sum > 0){
                    right--;
                }
                else{
                    left++;
                }
            }
            i++;
        }
        return ans;
    }
};