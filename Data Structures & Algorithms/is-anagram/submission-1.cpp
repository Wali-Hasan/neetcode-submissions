class Solution {
public:
    bool isAnagram(string s, string t) {
        std::string_view s1 {s};
        std::string_view t1 {t};

        std::unordered_map<char, int> s_freq {};

        std::unordered_map<char, int> t_freq {};

        for (const auto& c : s1) {
            if (s_freq.contains(c)) 
                s_freq[c]+=1;
            else 
                s_freq[c]=1;
            
        }

        for (const auto& c : t1) {
            if (t_freq.contains(c)) 
                t_freq[c]+=1;
            else 
                t_freq[c]=1;
        }

        return s_freq == t_freq;
    }
};
