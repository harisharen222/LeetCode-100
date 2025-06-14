class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int min_diff = INT_MAX;
        int sum = 0;
        int closeset = 0;
        int n = nums.size();
        for(int i=0 ; i<n-2 ; i++){
            int num = nums[i];
            int left = i+1;
            int right = n-1;
            while(left<right){
                sum = num + nums[left] + nums[right];
                if(abs(target - sum) < min_diff){
                    min_diff = abs(target - sum);
                    closeset = sum;
                }
                if(sum < target)    left++;
                else    right--;
            }
        }
        return closeset;
    }
};