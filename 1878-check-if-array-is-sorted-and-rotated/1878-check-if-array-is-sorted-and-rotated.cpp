class Solution {
public:
    bool check(vector<int>& nums) {
        int ans = 0;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i-1] > nums[i]){
                ans++;
            }
        }
        if(nums[0]<nums[nums.size()-1]){
            ans++;
        }
        return ans <= 1;
    }
};