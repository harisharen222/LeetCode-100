class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sets{{}};

        for(int i : nums){
            int n = sets.size();
            for(int j=0 ; j<n ; j++){
                vector<int>subset = sets[j];
                subset.push_back(i);
                sets.push_back(subset);
            }
        }   
        return sets;
    }
};