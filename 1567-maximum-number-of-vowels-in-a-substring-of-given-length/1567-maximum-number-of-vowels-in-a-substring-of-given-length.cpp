class Solution {
public:
    
    int maxVowels(string s, int k) {
        int i=0;
        int count = 0;
        int maxi = INT_MIN;
        vector<bool> vowel(128, false);
        vowel['a'] = vowel['e'] = vowel['i'] = vowel['o'] = vowel['u'] = true;
        for(int j=0 ; j<s.length() ; j++){
            if(vowel[s[j]]){
                count++;
            }
            if(j-i+1 > k){
                if(vowel[s[i]])   count--;
                i++;
            }
            if(j-i+1 == k){
                maxi = max(maxi,count);
                if(maxi == k) return k;
            }
        }
        return maxi;
    }
};