class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0) return 0;
        int left = 0, right = 1;
        int ans = 1;
        while( left < n) {
            map<int,int> mp;
            mp[s[left]]++;
            right = left + 1;
                while(right < n) {

                    mp[s[right]]++;
                    if( mp[s[right]] > 1 ) {
                        ans = max(ans,(right-left));
                        break;
                    }

                    if(right == n-1) {
                        ans = max(ans,(right-left+1));
                    }

                    right++;
                }
            left++;
        }

        return ans;
    }
};
