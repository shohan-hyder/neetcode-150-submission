class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = nums[0];
        int n = nums.size();
        for(int i = 0; i < n-1; i++) {
            if(nums[i] > nums[i+1]) {
                ans = nums[i+1];
                break;
            }
        }

        return ans;
    }
};