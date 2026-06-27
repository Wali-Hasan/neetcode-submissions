class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count{};
        int res{}, max{};
        for (int n: nums) {
            count[n]++;
            if (count[n] >= max) {
                res = n;
                max = count[n];
            }
        }
        return res; 
    }
};