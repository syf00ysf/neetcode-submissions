class Solution {
    
public:
    int row = 0, col = 0;
    
    int numIslands(vector<vector<char>>& grid) {
        this->row = grid.size();
        this->col = grid[0].size();
        int res = 0;

        for(int r = 0; r < row; r++){
            for(int c = 0; c < col; c++){
                if(grid[r][c] != '0'){
                    res += 1;
                    dfs(r,c,grid);
                }
            }
        }
        return res;
    }
    void dfs(int r, int c, vector<vector<char>>& grid){
        if(r < 0 || r >= row || c < 0 || c >= col || grid[r][c] == '0' ){
            return;
        }
        grid[r][c] = '0';
        dfs(r+1, c, grid);
        dfs(r-1, c, grid);
        dfs(r, c+1, grid);
        dfs(r, c-1, grid);
    }
};
