class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyMin{prices[0]};
        int res{};
        for (int i{1}; i < prices.size(); i++) {
            buyMin = min(buyMin, prices[i-1]);
            res = max(prices[i] - buyMin, res);
             
        }
        return res; 
        
        
    }
};
