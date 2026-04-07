class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    long long l = 1, r = *max_element(piles.begin(), piles.end());
    long long ans = 0;
    while(l<=r) {
        long long mid = (l+r)/2;

        long long total_time = 0;

        for(auto k: piles) {
          
            total_time += ((k + mid - 1) / mid);
        }

        if(total_time <= h) {
            r = mid - 1;
            ans = mid;
        }
        else {
            l = mid + 1;
        }
        
    }

    return ans;
    }
};
