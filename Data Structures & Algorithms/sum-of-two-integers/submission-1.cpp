class Solution {
public:
    int getSum(int a, int b) {
        bitset<32> num1(a);
        bitset<32> num2(b);
        bitset<32> ans;
        int carry = 0;

        for(int i=0; i<=32; i++) {
            ans[i] = num1[i] ^ num2[i] ^ carry;
            if( (num1[i] & num2[i]) | (num1[i] & carry) | (num2[i] & carry) )
                {
                    carry =1;
                }
            else {
                carry = 0;
            }
        
        }

        int res = ans.to_ullong();
        return res;

    }
};
