class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pairs{};

        vector<double> res{};
        for (int i{}; i<position.size(); i++) {
            pairs.push_back({position[i], speed[i]});
        }
        sort(pairs.begin(), pairs.end());

        for (int i = pairs.size()-1; i >= 0; i--) {
            int p = pairs[i].first;
            int s = pairs[i].second; 
            res.push_back(static_cast<double>(target-p)/s);

            if (res.size() >= 2 && res[res.size()-1] <= res[res.size()-2]) {
                res.pop_back();
            }
        }
        return res.size();

    }
};
