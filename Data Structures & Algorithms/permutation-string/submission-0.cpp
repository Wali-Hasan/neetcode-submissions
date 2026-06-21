class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.length() < s1.length()) {
            return false;
        }
        
        sort(s1.begin(), s1.end());
        
        int l{};
        for (int r=s1.length(); r <= s2.length(); r++) {
            string sub = s2.substr(l, s1.length());
            sort(sub.begin(), sub.end());
            if (sub == s1) return true;
            l++;
        }
        return false;
        
    }
};
