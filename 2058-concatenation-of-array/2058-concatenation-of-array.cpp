class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(nums);
        // ans.insert(ans.begin()+n,nums)
        //ans.insert(ans.begin(),nums.begin(),nums.end());
        ans.insert(ans.end(),nums.begin(),nums.end());
        return ans;
    }
};