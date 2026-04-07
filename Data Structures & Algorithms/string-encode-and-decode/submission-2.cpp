class Solution {
public:
        
    string temp="";

    string encode(vector<string>& strs) {

        for(auto k: strs) {
            temp = temp + k;
            temp = temp + "~";
        }
        return temp;

    }

    vector<string> decode(string temp) {
        int n = temp.size();
        vector<string> ans;
        string l = "";
        for(int i=0; i<n; i++) {

            if(temp[i] == '~') {
                ans.push_back(l);
                l = "";
            }
            else l = l + temp[i]; 
        }

        return ans;
    }
};
