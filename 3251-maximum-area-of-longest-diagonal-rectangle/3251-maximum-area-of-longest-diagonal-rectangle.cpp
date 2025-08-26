class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiagonal = 0;
        int ans = 0;

        for(auto &row : dimensions){
            int l = row[0];
            int w = row[1];

            int diagonal = l * l + w * w;
            int area = l * w;
            if(diagonal > maxDiagonal || (diagonal == maxDiagonal && area > ans)){
                maxDiagonal = diagonal;
                ans = area;
            }
        }
        return ans;
    }
};