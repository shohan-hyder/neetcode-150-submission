class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0) return 0;
        if (n == 1) return 1;
        //int left = 0, right = 1;
        int ans = 1;
        for(int i=0;i<n;i++) {
            map<int,int> mp;
            mp[s[i]]++;
                for(int j = i+1;j<n;j++) {

                    mp[s[j]]++;
                    if( mp[s[j]] > 1 ) {
                        ans = max(ans,(j-i));
                        //i = j-1;
                        break;
                    }

                    if(j == n-1) {
                        ans = max(ans,(j-i+1));
                        //i = j-1;
                    }
                }
        }

        return ans;
    }
};
