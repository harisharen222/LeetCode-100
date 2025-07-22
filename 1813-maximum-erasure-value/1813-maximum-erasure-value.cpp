class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0 ; 
        int j = 0;
        int sum = 0,maxsum = INT_MIN;
        unordered_set<int> freq;
        while(j < nums.size()){
            while(freq.count(nums[j])){
                freq.erase(nums[i]);
                sum -= nums[i];
                i++;
            }
            freq.insert(nums[j]);
            sum += nums[j];
            maxsum = max(maxsum , sum);
            j++;
        }
        return maxsum;
    }
};