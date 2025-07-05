class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>freq;
        vector<vector<string>>ans;
        for(int i=0 ; i<strs.size() ; i++){
            string current = strs[i];
            sort(current.begin(),current.end());
            freq[current].push_back(strs[i]);
        }
        for(auto& [key,value] : freq){
            ans.push_back(freq[key]);
        }
        return ans;
    }
};