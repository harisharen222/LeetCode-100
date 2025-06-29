class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int k=0;
        for(int j=0 ; j<nums.size() ; j++ ){
            if (i<2){
                nums[i] = nums[j];
                i++;
            }
            else{
                if(nums[j] != nums[k]){
                    nums[i] = nums[j];
                    k++;
                    i++;
                }
                
            }
        }
        nums.resize(i);
        return i;
    }
};