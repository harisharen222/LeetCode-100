class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num : nums){
            freq[num]++;
        }
        vector<int> ans;
        for(auto& pair : freq){
            if((pair.second) == 2){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};