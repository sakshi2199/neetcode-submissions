class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto& pair : mp) {
            minHeap.push({pair.second, pair.first});
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        for (int i = 0; i < k; i++) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return result;
    }
};
