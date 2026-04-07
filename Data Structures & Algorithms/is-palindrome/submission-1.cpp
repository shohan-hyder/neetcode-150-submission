class Solution {
public:
    bool isPalindrome(string s) {
        
        int ch = 0;
        string ans = "";
        for(auto k: s) {
            if(isalnum(k)) {
                ans += tolower(k);
            }
        }

        int left = 0, right = ans.size() - 1;
        while(left < right) {
            if(ans[left] != ans[right]) return false;
            left++, right--;
        }
        return true;
        
    }
};