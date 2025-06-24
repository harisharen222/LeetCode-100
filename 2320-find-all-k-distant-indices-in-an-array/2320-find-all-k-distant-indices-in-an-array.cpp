class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
       // int i = 0;
        int j = 0;
        set<int> ans;
        while(j < nums.size()){
            if(nums[j] == key){
                for(int i = 0 ; i<nums.size() ; i++){
                    if(abs(i-j) <= k){
                        ans.insert(i);
                    }
                }
            }
            j++;
        }
        vector<int>result;
        for(auto x : ans){
            result.push_back(x);
        }
        return result;
    }
};