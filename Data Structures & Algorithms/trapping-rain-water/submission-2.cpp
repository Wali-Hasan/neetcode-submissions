class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;

        int l = 0, r = height.size()-1;
        int leftMax = height[l], rightMax = height[r];

        int res{};

        while (l < r) {
            if (leftMax < rightMax) {
                l+=1;
                if (leftMax - height[l] >= 0) {
                    res += leftMax - height[l];
                }
                leftMax = max(leftMax, height[l]);
                
            } else {
                r-=1;
                if (rightMax - height[r] >= 0) {
                    res += rightMax - height[r];
                }
                
                rightMax = max(rightMax, height[r]);
            }
        }
        return res; 

        
    }
};
