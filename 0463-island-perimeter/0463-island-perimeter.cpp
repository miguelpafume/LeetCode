class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int island {0}, neighbour {0};
        int row = grid.size();
        int col = grid[0].size();

        for (int i {0}; i < row; i++) {
            for (int j {0}; j < col; j++) {
                if (grid[i][j] == 1) {
                    island++;
                    if (j > 0 && grid[i][j-1] == 1) {
                        neighbour++;
                    }
                    if (i > 0 && grid[i-1][j] == 1) {
                        neighbour++;
                    }
                }
            }
        }
        return ((island * 4) - (neighbour * 2));
    }
};