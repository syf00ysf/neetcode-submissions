class TimeMap {
public:
    std::unordered_map<string, vector<pair<string, int>>> mp;
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        mp[key].emplace_back(value, timestamp);
    }
    
    string get(string key, int timestamp) {
        int left = 0, right = mp[key].size() - 1;
        string result = "";

        while(left <= right){
            int mid = left + (right - left) / 2;
            if(mp[key][mid].second <= timestamp){
                result = mp[key][mid].first;
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return result;
    }
};
