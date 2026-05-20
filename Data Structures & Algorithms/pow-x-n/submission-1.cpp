class Solution {
public:
    double myPow(double x, int n) {
        
        if(x == 0) return 0;
        if(n == 0) return 1;


        long double ans = 1;
        long power = abs(long (n));

        while(power) {

            if(power & 1) {
                ans *= x;
            }
            x *= x;
            power >>= 1;
        }

        if(n>=0) return ans;
        return (1/ans); 

    }
};
