class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> mp;

        for(const auto& str : strs){
            std::vector<int> count(26,0);
            for(auto c : str){
                count[c-'a']++;
            }
            std::string key = std::to_string(count[0]);
            for(int i = 0; i < 26; i++){
                key += ',' + std::to_string(count[i]);
            }
            mp[key].push_back(str);
        }
        std::vector<std::vector<std::string>> result;
        for(const auto& val : mp){
            result.push_back(val.second);
        }
        return result;
    }
};
