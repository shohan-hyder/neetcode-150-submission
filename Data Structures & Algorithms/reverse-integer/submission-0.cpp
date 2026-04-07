class Solution {
public:
    int reverse(int x) {
        int comp = x;
        x = abs(x);

        string s = to_string(x);
        std::reverse(s.begin(),s.end());
        long long number = stoll(s);
        if(comp < 0) {
            number *= (-1);
        } 
        long long l = -(1LL<<31);
        long long r = (1LL<<31) - 1;
        if(number < l || number > r) {
            return 0;
        }

        return static_cast<int>(number);
    }
};
