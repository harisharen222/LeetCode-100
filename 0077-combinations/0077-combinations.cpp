class Solution {
public:
    void solve(int i, vector<int>& curr,vector<vector<int>>& ans, vector<int>& nums,int k){
        if(curr.size() == k){
            ans.push_back(curr);
            return;
        }
        if(i == nums.size())
            return;
        
        
        curr.push_back(nums[i]);
        solve(i+1,curr,ans,nums,k);

        curr.pop_back();
        solve(i+1,curr,ans,nums,k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        for(int i=1 ; i<=n ; i++){
            nums.push_back(i);
        }
        vector<vector<int>> ans;
        vector<int>curr;
        int i=0;  
        solve(i,curr,ans,nums,k);
        return ans;
    }
};