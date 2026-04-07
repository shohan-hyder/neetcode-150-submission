class Solution {
public:
    bool isHappy(int n) {
        set<int> list_num;
        int num = n;
        while(list_num.find(num) == list_num.end()) {
            list_num.insert(num);
            num = square_result(num);

            if( num == 1) return true;
        }

        return false;
    }
    private:
    int square_result(int n) {
        int ans = 0, sum = 0;
        while(n > 0) {
            int num = n % 10;
            sum = num * num;
            ans += sum;
            n /= 10;
        }

        return ans;
    }

};

