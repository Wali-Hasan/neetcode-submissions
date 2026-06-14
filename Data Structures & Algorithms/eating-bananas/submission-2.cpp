class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int right = *max_element(piles.begin(), piles.end());
        int left{1};
        int res{right};
        while (left <= right) {
            int k = (left+right) / 2;

            int hours{};

            for (int p: piles) {
                hours+=static_cast<int>(ceil(static_cast<double>(p)/k));
            }

            if (hours <= h) {
                res=min(k, res);
                right = k-1;
            } else {
                left = k+1;
            }
        }
        return res; 
        
        
        
    }
};
