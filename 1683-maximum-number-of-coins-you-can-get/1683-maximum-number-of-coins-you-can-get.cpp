class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        int count = 0;
        int maxsum = 0;
        int limit = (n/3);
        sort(piles.begin(),piles.end());
        for(int i=(n-2) ; i>=0 ; i = i-2){
            maxsum += piles[i];
            count++;
            if(count == limit)  break;
        }
        return maxsum;
    }
};