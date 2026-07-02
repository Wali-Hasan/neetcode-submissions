class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res{};
        priority_queue<pair<int, int>> heap{}; // val, index

        for (int i{}; i < k; i++) {
            heap.push({nums[i], i});
        }
        res.push_back(heap.top().first);
        int l{1};
        for (int r{k}; r < nums.size(); r++) {
         
            while (!heap.empty() && heap.top().second < l) {
                heap.pop();
            }
            heap.push({nums[r], r});
            res.push_back(heap.top().first);
            l++;
        }


        return res; 
    }
};
