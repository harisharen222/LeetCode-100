class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        int st = 0;
        int end = x;
        while (st <= end) {
            long long int mid = st + ((end - st) / 2);
            if ((mid * mid) == x) {
                return mid;
            } else if (mid * mid > x) {
                end = mid - 1;
            } else {
                ans = mid;
                st = mid+1;
            }
        }
        return ans;
    }
};