class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size();
        int b = nums2.size();
        vector<double> ans(a+b);

        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), ans.begin());
        double res = 0.0;
        int med = (a+b)/2;
        if((a+b) & 1) res = ans[med];
        else res = (ans[med] + ans[med-1])/2;

        return res;
        

    }
};
