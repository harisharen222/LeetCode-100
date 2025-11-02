class Solution {
public:
    int smallestNumber(int n) {
        long long x = 1;
        while (x < n){
            x = x * 2 + 1;

        }
        return x;
        
    }
};