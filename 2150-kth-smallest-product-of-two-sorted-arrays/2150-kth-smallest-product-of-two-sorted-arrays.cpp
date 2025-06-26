class Solution {
public:
    long long CountPairs(vector<int>& nums1, vector<int>& nums2, long long mid){
        long long count = 0;
        for(int a : nums1){
            if(a == 0){
                if(mid >= 0)    count += nums2.size();
            }
            else if(a > 0){
                int l = 0 , r = nums2.size();
                while(l<r){
                    int m = (l+r)/2;
                    if((long long) a * nums2[m] <= mid) l=m+1;
                    else    r = m;
                }
                count += l;
            }
            else{
                int l = 0, r=nums2.size();
                while(l<r){
                    int m = (l+r)/2;
                    if((long long) a * nums2[m] <= mid) r = m;
                    else    l = m+1;
                }
                count += nums2.size()-l;
            }
        }
        return count;
    }
    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
        long long low = -1e10, high = 1e10;
        while(low < high){
            long long mid = low + (high-low)/2;
            if(CountPairs(nums1,nums2,mid) < k){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return low;

    }
};