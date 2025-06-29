class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        for(int i=1 ; i<n ; i++){
            if(nums[j] != nums[i]){
                j++;
                nums[j] = nums[i];
            }
        }
        nums.resize(j+1);
        return j+1;
    }
};