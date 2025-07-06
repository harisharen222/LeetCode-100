class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>check;
        if(n == 1)  return true;
        check[n]++;
        int num = n;
        int sum = 0;
        while(sum != 1){
            sum = 0;
            while(num > 0){
                int x = num % 10;
                sum += (x*x);
                num = num/10;
            }
            if(check.count(sum)){
                return false;
            }
            else{
                check[sum]++;
            }
            num = sum;
        }
        return true;
    }
};