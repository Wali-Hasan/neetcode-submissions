class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet{};

        int res{};

        int l = 0, r = 0;

        while (r < s.length()) {
            while (charSet.contains(s[r])) {
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[r]);

            res = max(res, r-l+1);
            r++;
        }
        return res; 
        
    }
};
