class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int bestPrice=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestPrice){
                mp=max(mp,prices[i]-bestPrice);
            }
            bestPrice = min(prices[i],bestPrice);
        }
        return mp;
    }
};