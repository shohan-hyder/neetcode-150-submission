class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> leftmost;
        vector<int> rightmost;
        int n = heights.size();
        int max_area = 0;
         
        for(int i=0; i<n; i++) {
            int left = i+1;
            int rightmost = i+1, leftmost = i;
            while(rightmost < n && heights[i] <= heights[rightmost]) {
                rightmost++;
            }

            while(leftmost >= 0 && heights[i] <= heights[leftmost]) {
                leftmost--;
            } 
            rightmost--, leftmost++;
            max_area = max(max_area, heights[i] * (rightmost - leftmost + 1));
        }

        return max_area;
    }
};