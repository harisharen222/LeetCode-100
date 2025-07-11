class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        sort(nums.begin(),nums.end());
        int sum = 0;
        int operations = 0;
        while(i < j){
            sum = nums[i] + nums[j];
            if(sum == k){
                operations++;
                i++;
                j--;
            }
            else if(sum > k){
                j--;
            }
            else{
                i++;
            }
        }
        return operations;
    }
};