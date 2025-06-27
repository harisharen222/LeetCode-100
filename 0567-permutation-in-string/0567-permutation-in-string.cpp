class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        vector<int> freq2(26,0);
        if(s1.length() > s2.length())   return false;
        for(int i=0 ; i<s1.length() ; i++){
            freq[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        if(freq == freq2)   return true;
        int window = s1.length();
        for(int i=s1.length() ; i<s2.length() ; i++){
            int index = s2[i]-'a';
            freq2[index]++;
            
            int oldidx = s2[i-window]-'a';
            freq2[oldidx]--;

            if(freq == freq2)   return true;
        }
        return false;
    }
};