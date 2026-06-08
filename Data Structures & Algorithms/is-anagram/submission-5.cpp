class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;


        std::unordered_map<char, int> mapS {};
        std::unordered_map<char, int> mapT {};

        for (std::size_t i{}; i < s.length(); i++) {
            mapS[s[i]]++;
            mapT[t[i]]++;

        }

        return mapS == mapT;
    }
};
