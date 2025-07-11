class Solution {
public:
    bool isValid(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int i=0;
        int count = 0;
        int maxi = INT_MIN;
        for(int j=0 ; j<s.length() ; j++){
            if(isValid(s[j])){
                count++;
            }
            if(j-i+1 > k){
                if(isValid(s[i]))   count--;
                i++;
            }
            if(j-i+1 == k){
                maxi = max(maxi,count);
                
            }
        }
        return maxi;
    }
};