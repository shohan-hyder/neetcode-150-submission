class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=1; i<=n; i++) {
            int num = 0;
            for(int bit=0; bit<32; bit++) {
                if((1 << bit) & i) ans[i]++;
            }
        }
        return ans;
    }
};
