class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int bestday = prices[0];
        for(int i=1 ; i<prices.size() ; i++){
            if(prices[i] > bestday){
                max_profit = max(prices[i]-bestday , max_profit);
            }
            bestday = min(bestday, prices[i]);
        }
        return max_profit;
    }
};