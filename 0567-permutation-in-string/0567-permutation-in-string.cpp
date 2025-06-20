class Solution {
public:
    bool isfreqSame(vector<int>& freq1 , vector<int>& freq2){
        for(int i=0 ; i<26 ; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        for(int i=0 ; i<s1.length() ; i++){
            freq[s1[i]-'a']++;
        }
        int window_size = s1.length();

        for(int i=0 ; i<s2.length() ; i++){
            vector<int> freq2(26,0);
            int window_idx = 0, idx = i;
            while(window_idx < window_size && idx < s2.length()){
                freq2[s2[idx]-'a']++;
                window_idx++;
                idx++;
            }
            if(isfreqSame(freq,freq2)){
                return true;
            }
        }
        return false;
    }
};