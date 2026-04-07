class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> s_list;
        
        for(auto k: strs) {
            string temp = k;
            sort(temp.begin(), temp.end());
            s_list[temp].push_back(k);
        }

        vector<vector<string>> ans;

        for(auto &k : s_list) {
            ans.push_back(k.second);
        }

        return ans;
    }
};
