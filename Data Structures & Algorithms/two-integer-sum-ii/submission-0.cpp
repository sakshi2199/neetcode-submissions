class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        int first = 0;
        int last = size - 1;
        while (first <= last) {
            int sum = numbers[first] + numbers[last];
            if (sum == target) {
                return {first+1, last+1};
            } else if (sum < target) {
                first++;
            } else {
                last--;
            }
        }
   }
};