class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0 ; i<strs.size() ; i++){
            string curr = strs[i];
            sort(curr.begin(),curr.end());
            mp[curr].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto s : mp){
            ans.push_back(s.second);
        }
        return ans;
    }
};