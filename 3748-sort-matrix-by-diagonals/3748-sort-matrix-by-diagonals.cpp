class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        map<int, vector<int>> d;

        // collect diagonals (vectors are in top->bottom order initially)
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                d[i - j].push_back(grid[i][j]);
            }
        }

        // sort each diagonal so that .back() yields the next correct element
        for (auto &p : d) {
            if (p.first >= 0) {
                // want descending top->bottom -> sort ascending so back() is largest
                sort(p.second.begin(), p.second.end());
            } else {
                // want ascending top->bottom -> sort descending so back() is smallest
                sort(p.second.begin(), p.second.end(), greater<int>());
            }
        }

        // write back: always take .back()
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                int key = i - j;
                grid[i][j] = d[key].back();
                d[key].pop_back();
            }
        }

        return grid;
    }
};
