class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<int> bracket;
        for(int i=0; i<n; i++) {
            if(!bracket.empty()) {
                char next = s[i];
                if(check(bracket.top(), next)) {
                    bracket.pop();
                    continue;
                }
            }
            bracket.push(s[i]);
        }

    if(bracket.empty()) return true;
    return false;
    }

private:
    bool check(char f, char l){
        if( (f == '(' && l == ')') || (f == '{' && l == '}') || (f == '[' && l == ']')) {
            return true;
        }
        return false;
    }

};