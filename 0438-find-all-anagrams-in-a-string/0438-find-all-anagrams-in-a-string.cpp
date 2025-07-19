class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int m = p.length();
        unordered_map<char,int>anagram;
        for(char c : p){
            anagram[c]++;
        }
        unordered_map<char,int>freq;
        vector<int>ans;

        for(int i=0 ; i<n ; i++){
            freq[s[i]]++;
            if(i >= m){
                freq[s[i - m]]--;  // remove char going out of window
                if (freq[s[i - m]] == 0) {
                    freq.erase(s[i - m]);  // clean up
                }
            }
            if(freq == anagram){
                ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};