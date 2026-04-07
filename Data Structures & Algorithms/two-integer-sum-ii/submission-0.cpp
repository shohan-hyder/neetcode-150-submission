class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0, right = n - 1;
    bool check = true;
    while(left < right) {
        int total = numbers[left] + numbers[right];

        if(total == target) break;

        if(total > target) right--;
        else left++;
    }

    vector<int> ans;
    ans.push_back(left+1);
    ans.push_back(right+1);
    return ans;
    
    
    }
};
