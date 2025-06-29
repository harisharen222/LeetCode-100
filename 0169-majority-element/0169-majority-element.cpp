class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st=0;
        int end = nums.size()-1;
        int mid = st+(end-st)/2;
        return nums[mid];
    }
};