class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() < 2) return true;
        int n = nums.size()-1;
        int farthest = 0;
        for(int i=0 ; i<=farthest ; i++){
            farthest = max(farthest,i+nums[i]);
            if(farthest >= n){
                return true;
            }
        }
        return false;
    }
};