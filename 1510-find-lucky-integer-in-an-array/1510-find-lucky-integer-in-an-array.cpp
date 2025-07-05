class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;
        unordered_map<int,int>freq;
        for(int num : arr){
            freq[num]++;
        }
        for(auto& [key,value] : freq){
            if(key == value){
                ans = max(ans,key);
            }
        }
        return ans;
    }
};