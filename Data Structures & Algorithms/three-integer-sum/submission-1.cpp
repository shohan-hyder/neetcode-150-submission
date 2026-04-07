class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++) {
            
            if(i>0 && nums[i] == nums[i-1]) continue;
            
            int right = n-1, left = i+1;
            while(left < right) {
                int target = nums[left] + nums[right] + nums[i];
                if(target == 0) {
                ans.push_back({nums[i], nums[left], nums[right]});
                left++;
                //Matching Element elemination process
                while(nums[left] == nums[left-1] && left < right){
                    left++;
                    }
                }
                else if(target > 0) right--;
                else left++;
            }
        }

        return ans;
    }
};
