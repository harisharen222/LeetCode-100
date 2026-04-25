class Solution {
public:

    int getPivot(vector<int>& nums,int n){
        int low = 0, high = n-1;
        while(low < high ){
            int mid = low + (high - low)/2;
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }else{
                high = mid;
            }
        }
        return low;
    }
    int binary_search(vector<int>&nums, int n,int m, int target){
        int low = n,high = m;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums,n);

        if(pivot == 0){
            return binary_search(nums, 0, n-1, target);
        }
        else if(target >= nums[pivot] && target <= nums[n-1]){
            return binary_search(nums, pivot, n-1, target);
        }
        else{
            return binary_search(nums, 0, pivot-1, target);
        }
        return -1;
    }
};