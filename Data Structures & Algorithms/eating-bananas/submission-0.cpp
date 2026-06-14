class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_k = *max_element(piles.begin(), piles.end());
        int left{1};
      
        while (left < max_k) {
            int k = left + (max_k - left) / 2;
            int total_hour{};
            for (const auto& pile: piles) {
                total_hour+=static_cast<int>(ceil(static_cast<double>(pile)/k));
            }

            if (total_hour > h) {
                left = k+1; 
            }
            else if (total_hour<=h) {
                max_k = k;
            } 
        }
        return left;
        
        
        
    }
};
