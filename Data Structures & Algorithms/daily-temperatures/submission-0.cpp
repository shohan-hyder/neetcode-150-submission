class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n,0);
        stack<pair<int,int>> num; // -- num -(temp,index)

        for(int i=0; i<n; i++){
            int curr_temp = temperatures[i];
            while(!num.empty() && curr_temp > num.top().first) {
                auto pair_num = num.top();
                ans[num.top().second] = i - num.top().second;
                num.pop();
                //ans[pair_num.second] = i - pair_num.second;

            }
            num.push({curr_temp,i});
        }

        return ans;
    }
};