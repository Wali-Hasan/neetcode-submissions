class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res{""};
        for (int i{}; i < strs[0].length(); i++) {
            for (const auto& s: strs) {
                if (i == s.length()|| s[i] != strs[0][i]) {
                    return res;
                }
            }
            res += strs[0][i];
        }
        return res; 
    }
};