class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy = INT_MAX;
        int profit = 0;
        for(int i=0 ; i<prices.size() ; i++){
            bestbuy = min(bestbuy,prices[i]);
            if(prices[i] > bestbuy){
                profit += (prices[i]-bestbuy);
                if(i < prices.size()-1){
                    if(prices[i] < prices[i+1]){
                        bestbuy = prices[i];
                    }
                    else{
                        bestbuy = INT_MAX;
                    }
                }
            }
        }
        return profit;
    }
};