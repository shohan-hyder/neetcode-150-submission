class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int left = 0, ans= 0;
        for(int i=1;i<n;i++) {
            if(prices[i] > prices[left]) {
                int profit = prices[i] - prices[left];
                ans = max(ans, profit);
            }
            else {
                left = i;
            }
        }

        return ans;
    }
};
