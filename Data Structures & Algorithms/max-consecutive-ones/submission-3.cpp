class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res{0};
        int curr{0};

        for (int num: nums) {
            if (num == 0) {
                res = max(res, curr);
                curr =0;
            } else {
                curr++; 
            }
        }
        return max(res, curr);
        
    }
};