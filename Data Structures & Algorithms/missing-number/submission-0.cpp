class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = n;
        int i = 0;
        for(auto k: nums) {
            ans ^= i ^ k;
            i++; 
        }
        return ans;
    }
};
