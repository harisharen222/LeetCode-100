class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int st = 0;
        int end = 0;
        int count = 0;
        while( end < n ){
            if(nums[end]-nums[st] > k){
                st = end;
                count++;
                continue;
            }
            end++;
        }
        return count+1;
    }
};