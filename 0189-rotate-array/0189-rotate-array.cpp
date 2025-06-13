class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>arr(n);
        for(int i=0 ; i<n ; i++){
            int m = ((i+k)%n);
            arr[m] = nums[i];
        }
        nums = arr;
    }
};