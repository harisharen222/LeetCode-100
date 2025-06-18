class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        vector<int>a(2);
        unordered_map<int,int>m;
        for(int nums : nums){
            m[nums]++;
        }
        int leftover = 0;
        int count = 0;
        for(auto& pair : m){
            
            count += pair.second/2;
            leftover += pair.second%2 ;
            
        }
        return {count,leftover};
        
    }
};