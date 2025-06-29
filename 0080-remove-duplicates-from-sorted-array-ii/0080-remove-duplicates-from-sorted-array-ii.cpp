class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int count = 0;
        int len = 0;
        for(int j=1 ; j<n ; j++){
            if(nums[j] != nums[i]){
                i = j;
                count = 0;
            }
            else{
                count++;
                if(count > 1){
                    nums.erase(nums.begin()+j);
                    n = nums.size();
                    len++;
                    j--;
                }
            }
        }

        return n;
    }
};