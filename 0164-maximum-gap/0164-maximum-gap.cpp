class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxdiff = 0;
        for(int i=1 ; i<nums.size() ; i++){
            int current = nums[i]-nums[i-1];
            maxdiff = max(current,maxdiff);
        }
    return maxdiff;
    }
    
};