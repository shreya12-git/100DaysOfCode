class Solution {
public:

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buyStock=prices[0];
        int maxProfit=0;
        for(int i=0;i<n;i++){
            if(prices[i]<buyStock){
                buyStock=prices[i];
            }
            else if(prices[i]-buyStock>maxProfit){
                        maxProfit=prices[i]-buyStock;
            }
        }
        return maxProfit;
       
    }
};