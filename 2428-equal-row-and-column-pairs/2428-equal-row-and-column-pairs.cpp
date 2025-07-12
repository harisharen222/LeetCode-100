class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        map<vector<int>,int>rows;
        for(int i=0 ; i<row ; i++){
            rows[grid[i]]++;
        }
        int count = 0;
        for(int j = 0 ; j<col ; j++){
            vector<int>temp(row);
            for(int i = 0 ; i<row ; i++){
                temp[i] = grid[i][j];
            }
            count += rows[temp];

        }
        return count;
    }
    
};