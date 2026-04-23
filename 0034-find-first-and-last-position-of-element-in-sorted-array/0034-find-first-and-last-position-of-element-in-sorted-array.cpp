class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first_occurence = -1, last_occurence = -1;
        int low = 0, high = nums.size()-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                first_occurence = mid;
                high = mid - 1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        low = 0;
        high = nums.size()-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                last_occurence = mid;
                low = mid + 1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return {first_occurence,last_occurence};
    }
};