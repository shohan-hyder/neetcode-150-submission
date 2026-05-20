class Solution {
public:
    double myPow(double x, int n) {
        
        if(x == 0) return 0;
        if(n == 0) return 1;

        
        long power = abs(long (n));
        long double ans = finding_square(x, power);
        if(n>=0) return ans;
        return (1/ans); 

    }

private:
    long double finding_square(double x, long power) {
        if(power == 0) return 1;

        double half = finding_square(x, power/2);

        return (power & 1)? half * half * x : half * half;
    }
};
