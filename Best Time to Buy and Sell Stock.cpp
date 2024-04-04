class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0], buy = 0, sell = 0, maxOfProfits = 0;

        for(int i = 0; i<prices.size(); i++){
            // buy at local minimum price 
            if(prices[i] <= minPrice){
                buy = i;
                minPrice = prices[i];
            }
            else{
                // if price more than local minimum, sell at that price at that price 
                sell = i;
                // keep track of maximum profits 
                maxOfProfits = max(maxOfProfits, prices[sell] - prices[buy]);
            }
        }

        return maxOfProfits;
    }
};
