class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>freq;

        for(int i=0 ; i<nums.size() ; i++){
            int search = target - nums[i];
            if(freq.find(search) != freq.end()){
                return {freq[search],i};
                break;
            }
            freq[nums[i]] = i;

        }
        return {};
    }
};