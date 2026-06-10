class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l{}, r{static_cast<int>(numbers.size())-1};

        while (l < r) {
            if (numbers[l] + numbers[r] < target) {
                l++;
                continue;
            }
            if (numbers[l] + numbers[r] > target) {
                r--;
                continue;
            }
            if (numbers[l] + numbers[r] == target) {
                return {l+1, r+1};
            }
        }
        return {};
        
    }
};
