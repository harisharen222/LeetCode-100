class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        int j = 0;
        set<int> ans;
        while(j < nums.size()){
            if(nums[j] == key){
                int start = max(0,j-k);
                int end = min(n-1,j+k);
                for(int i=start ; i<=end ; i++){
                    ans.insert(i);
                }
            }
            j++;
        }
        return vector<int>(ans.begin(),ans.end());
    }
};