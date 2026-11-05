class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;

        for(int m = 0; m < grid.size(); m++){
            for(int n = 0; n < grid[0].size(); n++){
                if(grid[m][n] != '0'){
                    res += 1;
                    dfs(m,n,grid);
                }
            }
        }
        return res;
    }
    void dfs(int row, int col, std::vector<vector<char>>& grid){
        if(row < 0 || row >= grid.size()){
            return;
        }
        if(col < 0 || col >= grid[0].size()){
            return;
        }
        if(grid[row][col] == '0'){
            return;
        }
        grid[row][col] = '0';
        dfs(row+1, col, grid);
        dfs(row-1, col, grid);
        dfs(row, col+1, grid);
        dfs(row, col-1, grid);
    }
};
