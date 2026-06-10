class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        vector<int> starts{};

        for (const auto& num: numSet) {
            if (!numSet.contains(num-1)) {
                starts.push_back(num);
            }
        }

        int longest{0};
        for (const auto& start: starts) {
            int curr{start};
            int curr_run{0};
            while (numSet.contains(curr)) {
                curr_run++;
                curr+=1;
            }
            if (curr_run > longest) {
                longest = curr_run; 
            }
        }
        return longest;
    }
};
