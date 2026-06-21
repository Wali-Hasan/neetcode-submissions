class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false; 

        vector<int> target(26);

        for (const auto& c: s1) {
            target[c-'a']++;
        }

        vector<int> curr(26);
        for (int i{}; i < s1.length(); i++) { // makes the curr array for first s1 letters of s2
            curr[s2[i]-'a']++;
        }
        if (target == curr) {
                return true; 
        }
        int l{};
        for (int r = s1.length(); r < s2.length(); r++) {
            curr[s2[l]-'a']--;
            curr[s2[r]-'a']++;
            l++;
            if (target == curr) {
                return true; 
            }
        }
        return false; 
    }
};
