class Solution {
public:
    void solve(vector<int> curr, vector<vector<int>>& ans, vector<int>& nums, unordered_map<int,bool>mapping){
        if(curr.size() == nums.size()){
            ans.push_back(curr);
            return;
        }
        for(int i=0 ; i<nums.size() ; i++){
            if(mapping[nums[i]] == true){
                continue;
            }
            curr.push_back(nums[i]);
            mapping[nums[i]] = true;
            solve(curr,ans,nums,mapping);
            curr.pop_back();
            mapping[nums[i]] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        unordered_map<int,bool> mapping;
        solve(curr,ans,nums,mapping);
        return ans;
    }
};