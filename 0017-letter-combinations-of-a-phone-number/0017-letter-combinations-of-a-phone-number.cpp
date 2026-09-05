class Solution {
public:
    void solve(int i,vector<string>& ans ,string curr, string digits,string map[] ){
        if(i == digits.length()){
            ans.push_back(curr);
            return;
        }
        int num = digits[i] - '0';
        string val = map[num];
        for(int j = 0; j<val.length(); j++){
            curr.push_back(val[j]);
            solve(i+1,ans,curr,digits,map);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans ;
        string curr = "";
        int idx = 0;
        string mapping[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(idx,ans,curr,digits,mapping);
        return ans;
    }
};