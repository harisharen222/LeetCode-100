class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        int n = s.length();
        int m = p.length();
        if(n<m) return {};
        vector<int> pCount(26, 0), sCount(26, 0);
        for(char c : p){
            pCount[c-'a']++;
        }

        vector<int>ans;

        for(int i=0 ; i<n ; i++){
            sCount[s[i]-'a']++;
            if(i >= m){
                sCount[s[i - m]-'a']--;  // remove char going out of window
                
            }
            if(sCount == pCount){
                ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};