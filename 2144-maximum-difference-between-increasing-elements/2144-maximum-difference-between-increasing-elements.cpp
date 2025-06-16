class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min_element = nums[0];
        int max_diff = -1;
        int n = nums.size();
        for(int i=1 ; i<n ; i++){
            if(nums[i]>min_element){
                max_diff = max(max_diff, nums[i]-min_element);
            }
            min_element = min(min_element,nums[i]);
        }
        return max_diff;
    }
};