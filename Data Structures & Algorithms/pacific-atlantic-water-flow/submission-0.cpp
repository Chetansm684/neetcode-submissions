class Solution {
public:
    int rows, cols;
    vector<vector<int>> pacific, atlantic;

    void dfs(vector<vector<int>>& heights,
             int r, int c,
             vector<vector<int>>& visited) {

        visited[r][c] = 1;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr < 0 || nr >= rows ||
                nc < 0 || nc >= cols) {
                continue;
            }

            if (visited[nr][nc]) {
                continue;
            }

            if (heights[nr][nc] >= heights[r][c]) {
                dfs(heights, nr, nc, visited);
            }
        }
    }

    vector<vector<int>> pacificAtlantic(
        vector<vector<int>>& heights) {

        rows = heights.size();
        cols = heights[0].size();

        pacific.assign(rows, vector<int>(cols, 0));
        atlantic.assign(rows, vector<int>(cols, 0));

        for (int c = 0; c < cols; c++) {
            dfs(heights, 0, c, pacific);
        }

        for (int r = 0; r < rows; r++) {
            dfs(heights, r, 0, pacific);
        }

        for (int c = 0; c < cols; c++) {
            dfs(heights, rows - 1, c, atlantic);
        }

        for (int r = 0; r < rows; r++) {
            dfs(heights, r, cols - 1, atlantic);
        }

        vector<vector<int>> result;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (pacific[r][c] && atlantic[r][c]) {
                    result.push_back({r, c});
                }
            }
        }

        return result;
    }
};