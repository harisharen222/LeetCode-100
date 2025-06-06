class Solution {
public:
    int last_occurrence(vector<int>& nums, int n, int st, int end,
                         int target) {
        int last = -1;
        while (st <= end) {
            int mid = st + ((end - st) / 2);
            if (nums[mid] == target) {
                last = mid;
                st = mid+1;
            }
            else if(nums[mid] > target) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return last;
    }
    int first_occurrence(vector<int>& nums, int n, int st, int end,
                         int target) {
        int first = -1;
        while (st <= end) {
            int mid = st + ((end - st) / 2);
            if (nums[mid] == target) {
                first = mid;
                end = mid - 1;
            }
            else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return first;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        int first = first_occurrence(nums,n,st,end,target);
        int last = last_occurrence(nums,n,st,end,target);
        return {first,last};
    }
};