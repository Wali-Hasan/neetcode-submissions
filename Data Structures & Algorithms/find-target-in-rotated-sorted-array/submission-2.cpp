class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        
        while (left < right) {
            int mid = (left+right)/2;
            if (nums[right] < nums[mid]) {
                left = mid + 1; 
            } else {
                right = mid; 
            }
        }

        
        if (target <= nums[nums.size()-1]) {
            left = right; 
            right = nums.size()-1;
   
        } else {
            left = 0;
        }

        while (left <= right) {
            int mid = (left+right)/2;
            if (target < nums[mid]) {
                right = mid-1; 
            } else if (target > nums[mid]) {
                left = mid+1;
            } else {
                return mid; 
            }
        }
        return -1; 
    }
};
