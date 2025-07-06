class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size() == 1)    return false;
        unordered_map<int,int> freq;
        int left = 0;
        for(int i=0 ; i<nums.size() ; i++){
            
            if(freq.count(nums[i])) return true;

            freq[nums[i]]++;
            if(freq.size() > k){
                freq.erase(nums[left]);
                left++;
            }
        }
        return false;
    }
};