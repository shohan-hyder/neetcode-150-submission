class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pos_speed;
        int n = speed.size();
        for(int i=0;i<n;i++) {
            pos_speed.push_back({position[i], speed[i]});
        }
        sort(pos_speed.rbegin(), pos_speed.rend());

        int fleet = 1;
        double curr_time = (double) (target - pos_speed[0].first)/pos_speed[0].second;
        double per_time_car = 0;
        for(int i=1; i<n; i++) {
            per_time_car = (double) (target - pos_speed[i].first)/pos_speed[i].second;

            if(per_time_car > curr_time){
                fleet++;
                curr_time = per_time_car;
            }
        }

        return fleet;
    }
};