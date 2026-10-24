class Solution {
public:
    bool isAnagram(string s, string t) {
        if (t.size() != s.size()){
            return false;
        }
        std::unordered_map<char, int> mp1;
        std::unordered_map<char, int> mp2;
        for(int i = 0; i < s.size(); i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        return mp1 == mp2;
    }
};
