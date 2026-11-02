class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] > 0) break;
            if (i>=1 && nums[i] == nums[i-1]) continue;
            int first = i+1;
            int last = nums.size() - 1;
            int target = 0 - nums[i];
            while (first < last) {
                int inner_sum = nums[first] + nums[last];
                if (inner_sum == target) {
                    result.push_back({nums[i], nums[first], nums[last]});
                    first++;
                    last--;
                    while (first<last && nums[first] == nums[first-1]) {
                        first++;
                    }
                    while (first<last && nums[last] == nums[last+1]) {
                        last--;
                    }
                } else if (inner_sum < target) {
                    first++;
                } else {
                    last--;
                }
            }
        }
        return result;
    }
};
