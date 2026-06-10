class Solution {
public:

    string encode(vector<string>& strs) {
        string res {""};
        for (const auto& s: strs) {
            res.append(std::to_string(s.length())).append("#").append(s);
        }
        return res; 
    }

    vector<string> decode(string s) {
        vector<string> res{};

        int i{0};
        int j{i};
        while (i < s.length()) {
            j=i;
            while (s[j] != '#') {
                ++j;
            }
            int len{stoi(s.substr(i, j-i))};
            ++j;
            res.push_back(s.substr(j, len));
            i = j + len;

        }
        return res;

    }
    // 3#wor2#it
};
