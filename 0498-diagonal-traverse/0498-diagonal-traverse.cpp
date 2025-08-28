class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        map<int, vector<int>> matrix;
        vector <int> result;

        for(int i=0 ; i<rows ; i++){
            for(int j=0 ; j<cols ; j++){
                matrix[i+j].push_back(mat[i][j]);
            }
        }

        for(auto& it : matrix){
            if(it.first % 2 == 0){
                reverse(it.second.begin(),it.second.end());
                
            }
            for(auto& num : it.second){
                    result.push_back(num);
                }
            
        }
        return result;
    }
};