class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        for(auto l: tokens) {
            
            if(l == "+") {
                int num2 = num.top();
                num.pop();
                int num1 = num.top();
                num.pop();
                num.push(num1+num2);
            }
            else if(l == "-") {
                int num2 = num.top();
                num.pop();
                int num1 = num.top();
                num.pop();
                num.push(num1 - num2);
            }
            else if(l == "*") {
                int num2 = num.top();
                num.pop();
                int num1 = num.top();
                num.pop();
                num.push(num1 * num2);
            }
            else if(l == "/") {
                int num2 = num.top();
                num.pop();
                int num1 = num.top();
                num.pop();
                num.push(num1 / num2);
            }
            else {
                int digit = stoi(l);    
                num.push(digit);
            }
        
        }

        return num.top();
    }
};
