class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> maxHeap;
        for (int i = 0; i<stones.size(); i++) {
            maxHeap.push(stones[i]);
        }
        while (maxHeap.size()>1) {
            int y = maxHeap.top();
            maxHeap.pop();
            int x = maxHeap.top();
            maxHeap.pop();
            if (x!=y) {
                y = y-x;
                maxHeap.push(y);
                x = 0;
            } else {
                x = 0;
                y = 0;
            }
        }
        if (maxHeap.size() == 1) {
            int t = maxHeap.top();
            return t;
        } 
        return 0;
    }
};
