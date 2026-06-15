class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> timeMap{};
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        timeMap[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if (!timeMap.contains(key)) return "";
        auto& vec = timeMap[key];
        int left = 0, right = vec.size()-1;
        string res="";
        while (left <= right) {
            int mid = (left+right)/2;
            if (timestamp >= vec[mid].first) {
                res = vec[mid].second;
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        return res;
    }
};  
