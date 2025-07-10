class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxi = -1e9;
        int i=0 ;
        int sum = 0;
        for(int j=0 ; j<n ; j++){
            sum += nums[j];
            if(j-i+1 == k){
                double avg = (double)sum/k;
                maxi = max(avg,maxi);
                sum -= nums[i];
                i++;
            }
        }
        return maxi;
    }
};