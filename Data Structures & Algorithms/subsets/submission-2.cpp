class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector<std::vector<int>> res;
        std::vector<int> sub;

        dfs(nums, 0, sub, res);
        return res;

    }
private:
    void dfs(const vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& res){
        if(i >= nums.size()){
            res.push_back(sub);
            return;
        }
        sub.push_back(nums[i]);
        dfs(nums, i+1, sub, res);
        sub.pop_back();
        dfs(nums, i+1, sub, res);
    }

};
