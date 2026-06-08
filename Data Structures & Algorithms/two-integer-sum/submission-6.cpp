class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> valMap{};
        
        for (int i{}; i<nums.size(); i++) {
            int diff = target - nums[i];
            if (valMap.contains(diff)) {
                return {valMap[diff], i};
            }
            valMap[nums[i]] = i;
        }
        return {};

    }
};
