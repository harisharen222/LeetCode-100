class Solution {
public:
    bool isValid( vector<int>& group,int k){
        return group.back() - group.front() <= k;
    }
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int size = 3;
        for(int i=0 ; i<n; i += size){
            vector<int> group;
            for(int j=i ; j< i+size && j<n ; j++){
                group.push_back(nums[j]);
            }
            if(!isValid(group,k)){
                return {};
            }
            result.push_back(group);
        }
        return result;
    }
};