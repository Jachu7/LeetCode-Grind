class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> neighbours(rows, vector<int>(cols, 0));
        map<int, int> mnoznik = {
            {0, 4},
            {1, 3},
            {2, 2},
            {3, 1},
            {4, 0}
        };
        int counter;
        int result = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                counter = 0;
                if (grid[i][j] == 1) {
                    if (j > 0 && grid[i][j-1] == 1) {
                        counter += 1;
                    }
                    if (j < cols - 1 && grid[i][j+1] == 1) {
                        counter += 1;
                    }
                    if (i > 0 && grid[i-1][j] == 1) {
                        counter += 1;
                    }
                    if (i < rows - 1 && grid[i+1][j] == 1) {
                        counter += 1;
                    }
                    neighbours[i][j] = counter;
                }
            }
        }


        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << neighbours[i][j] << " ";
                if (grid[i][j] == 1) {
                    result += mnoznik[neighbours[i][j]];
                }
            }
            cout << endl;
        }
        return result;
    }
};
