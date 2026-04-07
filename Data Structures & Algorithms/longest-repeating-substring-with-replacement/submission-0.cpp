class Solution {
public:
    int characterReplacement(string s, int k) {
        
        map<char,int> cnt_char;
        int n = s.size();
        int left = 0, max_char_cnt = 0, ans = 0;
        for(int right=0;right<n;right++) {
            cnt_char[s[right]]++;
            max_char_cnt = max(max_char_cnt, cnt_char[s[right]]);
            
            while((right - left + 1) - max_char_cnt > k) {
                cnt_char[s[left]]--;
                left++;
            }

            ans = max(ans, (right - left + 1));
            
        }
        
        return ans;
    }
};