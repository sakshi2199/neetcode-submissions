class Solution {
   public:
    int trap(vector<int>& height) {
        int size = height.size();
        vector<int> left_max_array(size);
        vector<int> right_max_array(size);
        int total = 0;

        left_max_array[0] = height[0];
        for (int i = 1; i < size; i++) {
            left_max_array[i] = max(left_max_array[i - 1], height[i]);
        }

        right_max_array[size - 1] = height[size - 1];
        for (int i = size - 2; i >= 0; i--) {
            right_max_array[i] = max(right_max_array[i + 1], height[i]);
        }

        for (int i = 0; i < size; i++) {
            total = total + (min(left_max_array[i], right_max_array[i]) - height[i]);
        }
        return total;
    }
};
