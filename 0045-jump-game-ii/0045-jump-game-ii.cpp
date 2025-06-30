class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int farthest = 0;
        int currEnd = 0;
        int i=0;
        int jump = 0;
        while( i<n-1 ){
            farthest = max(farthest,i+nums[i]);
            if(currEnd == i){
                jump++;
                currEnd = farthest;
                if(currEnd == n-1)  return jump;
            }
            i++;
        }
        return jump;
    }
};