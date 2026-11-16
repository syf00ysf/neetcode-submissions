class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::unordered_map <int, int> mp;
        for (auto& num : nums){
            mp[num] += 1;
        }
        for(int i = 0; i < mp.size(); i++){
            if(mp[nums[i]] == 1){
                return nums[i];
            }
        }
    }
};
