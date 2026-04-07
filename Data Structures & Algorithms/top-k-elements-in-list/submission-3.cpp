class Solution {
public:


    vector<int> topKFrequent(vector<int>& nums, int k) {
        int cnt = 0;
        map<int,int> mp;

        for(auto k: nums) {
            mp[k]++;
        }
        vector<int> ans;
       vector< pair<int,int>> arr;

       for(auto k: mp) {
        arr.push_back({k.second,k.first});
       }

       sort(arr.rbegin(),arr.rend());

       for(int i=0;i<k;i++) {
        ans.push_back(arr[i].second);
       }

    
        return ans;

    }
};
