class Solution {
public:
    int findLHS(vector<int>& nums) {
        int len = 0;
        unordered_map<int,int>freq;
        for(int n : nums){
             freq[n]++;
        }
        for(auto& [key,val] : freq){
            if(freq.count(key+1)){
                len = max(len,val+freq[key+1]);
            }
        }
        return len;
    }
};