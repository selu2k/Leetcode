class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],sell=0,maxx = 0;
        for(int i = 1; i<prices.size();i++){
            if(buy>prices[i]){
                buy = prices[i];
                sell = 0;
            }else{
                if(prices[i]>sell){
                    sell = prices[i];
                    maxx = max(maxx,sell-buy);
                }
            }
        }
        return maxx;
    }
};