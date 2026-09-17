class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        int minprice=prices[0];
        
        for(int i=1;i<n;i++){
           
            int curprofit=prices[i]-minprice;
            if(curprofit>maxprofit){
                maxprofit=curprofit;
            }
            minprice=min(minprice,prices[i]);
            
        }
        return maxprofit;
    }
};