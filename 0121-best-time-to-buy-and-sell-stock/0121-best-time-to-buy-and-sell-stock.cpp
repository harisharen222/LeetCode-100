class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int bestBuy = prices[0];
        int MaxProfit = 0;
        for(int i=0 ; i<n ; i++){
            if(prices[i]>MaxProfit){
                MaxProfit = max(MaxProfit,prices[i]-(bestBuy));
            }
            bestBuy = min(bestBuy,prices[i]);
            
            
        }
        return MaxProfit;
    }
};