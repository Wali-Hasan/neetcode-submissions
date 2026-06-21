class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count{};

        int res{};

        int l{};

        for (int r{}; r < s.length(); r++) {
            count[s[r]]++; 

            while (r-l+1-max_freq(count) > k) {
                count[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
        }
        return res;
    }

    int max_freq(unordered_map<char, int> m) {
        int max{};

        for (const auto& [key, value]: m) {
            if (value >= max) {
                max = value;
            }
        }
        return max; 
    }
};
