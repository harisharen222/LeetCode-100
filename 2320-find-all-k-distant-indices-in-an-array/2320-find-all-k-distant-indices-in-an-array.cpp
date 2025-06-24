class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        int j = 0;
        vector<bool> valid(n,false);
        while(j < nums.size()){
            if(nums[j] == key){
                int start = max(0,j-k);
                int end = min(n-1,j+k);
                for(int i=start ; i<=end ; i++){
                    if(valid[i])    continue;
                    else    valid[i] = true;
                }
            }
            j++;
        }
        vector<int>result;
        int i=0;
        while(i < valid.size()){
            if(valid[i])    result.push_back(i);
            i++;
        }
        return result;
        
    }
};