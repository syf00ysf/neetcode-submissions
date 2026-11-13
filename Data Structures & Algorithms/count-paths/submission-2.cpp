class Solution {
public:
    vector<vector<int>> cache;
    int uniquePaths(int m, int n) {
        cache.resize(m, vector<int>(n, -1));
        return dfs(0,0,m, n);
    }
    int dfs(int i, int j, int m, int n){
        if( i == (m - 1) && j == (n-1)) return 1;
        if(i >= m || j >= n) return 0;
        if(cache[i][j] != -1) return cache[i][j];
        return cache[i][j] = dfs(i, j+1, m, n) + dfs(i+1, j, m, n);
    }
};
