class Solution {
public:
    
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;
        vector<int> freq(26,0);
        vector<int> freq2(26,0);
        for(int i=0 ; i<s1.length() ; i++){
            freq[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        int window_size = s1.length();

        for(int i=s1.length() ; i<s2.length() ; i++){
            if(freq == freq2)   return true;
            freq2[s2[i]-'a']++;
            freq2[s2[i-s1.length()]-'a']--;
            
        }
        return freq == freq2;
    }
};