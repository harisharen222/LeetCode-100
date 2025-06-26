class Solution {
public:
    int longestSubsequence(string s, int k) {
        int count = 0;
        long long value = 0;
        int power = 0;
        for(int i=s.length()-1 ; i>=0 ; i--){
            if(s[i] == '0'){
                count++;
            }
            else{
                if(power < 32){
                    long long ans = 1LL << power;
                    if(value + ans <= k){
                        value += ans;
                        count++;
                    }
                }
            }
            power++;
        }
        return count;
    }
};