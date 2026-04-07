class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pos_speed;
        int n = speed.size();
        for(int i=0;i<n;i++) {
            pos_speed.push_back({position[i], speed[i]});
        }
        sort(pos_speed.rbegin(), pos_speed.rend());
        vector<double> stack;
        for(auto p: pos_speed) {
            stack.push_back((double) (target - p.first)/p.second);
            if(stack.size() >= 2 && stack[stack.size() - 1] <= stack[stack.size() - 2]) {
                stack.pop_back();
            }
        }

        return stack.size();
        

    }
};