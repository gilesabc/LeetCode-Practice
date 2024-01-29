class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // two pointers
        int l = 0;
        int r = l + 1;
        int maxProfit = 0;
        while(r < prices.size()){
            int currentProfit = prices[r] - prices[l];
            maxProfit = max(maxProfit, currentProfit);
            if(prices[r] < prices[l]){
                l = r;
            }
            r++;
        }
        return maxProfit;
    }
};