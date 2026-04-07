class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int left = 0, right = 1;
        int res = 0; 
        while(right < n) {
            if( prices[left] < prices[right]) {
                int ans = prices[right] - prices[left];
                res = max(ans, res);
            }
            else {
                left = right;
            }
            right++;
        }

        return res;
    }
};
