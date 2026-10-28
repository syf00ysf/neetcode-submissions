class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> mp;
        int left = 0, res = 0;


        for(int right = 0; right < s.size(); right++){
            if(mp.find(s[right]) != mp.end()){
                left = std::max(mp[s[right]] + 1 ,left);
            }
            mp[s[right]] = right;
            res = std::max(res, right - left + 1);
        }
        return res;
    }
};
