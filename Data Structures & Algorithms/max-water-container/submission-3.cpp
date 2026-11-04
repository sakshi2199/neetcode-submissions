class Solution {
public:
    int maxArea(vector<int>& heights) {
        int size = heights.size();
        int maxArea = 0;
        int l, w, a = 0;
        int left = 0;
        int right = size-1;
        while (left < right) {
            if (heights[left] < heights[right]) {
                l = heights[left];
                w = abs(right - left);
                a = l * w;
                maxArea = max(a, maxArea);
                left++;
            } else {
                l = heights[right];
                w = abs(right - left);
                a = l * w;
                maxArea = max(a, maxArea); 
                right--;
            }
        }
        return maxArea;
    }
};
