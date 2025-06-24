class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        int j = 0;
        int r = 0;
        vector<int>result;
        while(j < nums.size()){
            if(nums[j] == key){
                int l = max(r,j-k);
                r = min(n-1,j+k)+1;
                for(int i=l ; i<r ; i++){
                    result.push_back(i);
                }
            }
            j++;
        }
        return result;
        
    }
};