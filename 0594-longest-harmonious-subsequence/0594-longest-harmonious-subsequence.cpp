class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0 ,j=0;
        int len = 0;
        if(nums.back() - nums.front() == 0) return 0;
        vector<int>result;
        while(j<nums.size()){
            while((nums[j]-nums[i]) > 1){
                i++;
            }
            if(nums[j]-nums[i] == 1){
                len = max(len,j-i+1);
            }
            j++;
        }
        return len;
    }
};