class Solution {
public:
    bool isValid(vector<int>& nums, int k,int mid, int n){
        int subarray = 1;
        int num = 0;
        for(int i=0 ; i<n ; i++){
            if(nums[i] > mid)   return false;
            if(num + nums[i] <= mid){
                num += nums[i];
            }
            else{
                subarray++;
                num = nums[i];
            }
        }
        if(subarray <= k){
            return true;
        }
        else{
            return false;
        }
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = accumulate(nums.begin() , nums.end(),0);
        int st = 0 ; int ans = 0;
        int end = sum;
        while(st <= end){
            int mid = st + ((end-st)/2);
            if(isValid(nums,k,mid,n)){
                ans = mid;
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
};