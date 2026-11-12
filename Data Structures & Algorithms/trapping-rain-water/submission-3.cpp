class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int L = 0;
        int R = size-1;
        int left_max = height[L];
        int right_max = height[R];
        int total = 0;

        while(L<R) {
            if (left_max < right_max) {
                L++;
                left_max = max(left_max, height[L]);
                total = total + (left_max - height[L]);
            } else {
                R--;
                right_max = max(right_max, height[R]);
                total = total + (right_max - height[R]);
            }
        }
        return total;
    }
};
