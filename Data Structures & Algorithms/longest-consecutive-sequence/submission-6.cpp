class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int longest = 0;
        unordered_set<int> st;

        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        for (auto num : st) {
            if (!st.count(num - 1)) {
                int curr_start = num;
                while (st.count(curr_start + 1)) {
                    count++;
                    curr_start++;
                }
            }
            longest = max(longest, count);
            count = 1;
        }
        return longest;
    }
};
