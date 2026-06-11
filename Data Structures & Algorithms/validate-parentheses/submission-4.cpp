class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> parMap{
            {'(', ')'},
            {'{', '}'},
            {'[', ']'},
        };

        vector<char> chars{};

        for (const auto& c: s) {
            if (parMap.contains(c)) chars.push_back(c);
            else if (chars.size() == 0 || c != parMap[chars.back()]) return false; 
            else chars.pop_back();
        }

        return chars.size() == 0;
    }
}; // [(])
