class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp_count, mp_window;
        int left = 0;

        for(char& c : t){
            mp_count[c]++;
        }
        std::cout << mp_count.count('o');
        if(t.empty()) return "";

        int have= 0, need = mp_count.size();
        pair<int, int> res = {-1, -1};
        int resLen = INT_MAX;
        
        for(int right = 0; right < s.length(); right++){
            char c = s[right];
            mp_window[c]++;

            if(mp_count.count(c) && mp_window[c] == mp_count[c]){
                have++;
            }
            while(have == need){
                if((right - left + 1) < resLen){
                    resLen = right - left + 1;
                    res = {left, right};
                }
                mp_window[s[left]]--;
                if(mp_count.count(s[left]) && mp_window[s[left]] < mp_count[s[left]]){
                have--;
                }
                left++;
            }
            
        }
        
       
        return resLen == INT_MAX ? "" : s.substr(res.first, resLen);
    }
};
