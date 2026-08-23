class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0;
        int sell=1;
        int maxprofit=0;

        while(sell<prices.size()){
            if(prices[buy]>prices[sell]){
                buy=sell;
            }
            else{
                maxprofit=max(maxprofit,prices[sell]-prices[buy]);
            }
            sell++;
        }
        return maxprofit;
        
    }
};