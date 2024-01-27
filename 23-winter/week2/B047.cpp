// LeetCode
// 463. Island Perimeter

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int col = grid.size(), row = grid[0].size();
        int count = 0;
        for (int i = 0; i <col; i++) {
            for (int j = 0; j < row; j++) {
                if (grid[i][j] == 1) {
                    count += 4;
                    if (i > 0 && grid[i-1][j] == 1) count -= 2;
                    if (j > 0 && grid[i][j-1] == 1) count -= 2;
                }
            }
        }
        return count;
    }
};
