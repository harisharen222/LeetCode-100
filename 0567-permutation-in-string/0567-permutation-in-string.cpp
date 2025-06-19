class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0);
        
        for(int i=0 ; i<s1.size() ; i++){
            freq1[s1[i] - 'a']++;
        }
        int window_size = s1.length();
        for(int i=0 ; i<s2.length() ; i++){
            int window_idx = 0, idx = i;
            vector<int>freq2(26,0);

            while(window_idx < window_size && idx < s2.length()){
                freq2[s2[idx] - 'a']++;
                idx++;window_idx++;
            }
            if(freq1 == freq2)  return true;
        }
        return false;
    }
};