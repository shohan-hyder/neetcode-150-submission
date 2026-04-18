class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool check = true;
        int i  = 0;
        reverse(digits.begin(), digits.end());

        while(check) {
            if(i< digits.size()) {
                if(digits[i] == 9) {
                digits[i] = 0;
                }
            else {
                digits[i] += 1;
                check = false;
                }
            }
            else {
                digits.push_back(1);
                check = false;
            }
            i++;
        }

        reverse(digits.begin(), digits.end());
        return digits;
    }
};
