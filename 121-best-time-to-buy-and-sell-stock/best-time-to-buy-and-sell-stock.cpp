class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxprofit = 0;

    for(int i = 1; i < prices.size(); i++) {
        int curprofit = prices[i] - minprice;

        if(curprofit > maxprofit){
            maxprofit = curprofit;
        }
            

        minprice = min(minprice, prices[i]);
    }
    return maxprofit;
    }
};