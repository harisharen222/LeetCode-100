class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int m = nums.size();
        int count = 0;
        while(i < nums.size()){
            if(nums[i] == val){
                nums.erase(nums.begin()+i);
                count++;
            }
            else    i++;
        }
        nums.resize(m);
        int k = m - count;
        return k;
    }
};