class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty()) return "";
        unordered_map<char, int> mp1, mp2;
    

        for(char& c : t){
            mp1[c]++;
        }
        int have = 0, l = 0, need = mp1.size();
        pair<int, int> res = {-1, -1};
        int resLen = INT_MAX;

        for(int r = 0; r < s.length(); r++){
            char c = s[r];
            mp2[c]++;

            if(mp1.count(c) && mp2[c] == mp1[c]){
                have++;
            }
            while(have == need){
                if((r - l + 1) < resLen){
                    resLen = r - l + 1;
                    res = {l, r};
                }
                mp2[s[l]]--;
                if(mp1[s[l]] && mp2[s[l]] < mp1[s[l]]){
                    have--;
                }
                l++;
            }
        }

        return resLen == INT_MAX ? "" : s.substr(res.first, resLen);
    }
};
