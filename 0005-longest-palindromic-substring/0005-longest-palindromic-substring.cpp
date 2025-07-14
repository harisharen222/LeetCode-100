class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxlength = 0,startidx = 0;
        for(int i =0 ; i<n ; i++){
            int left = i-1;
            int right = i+1;
            while(left >= 0 && right < n && s[left] == s[right]){
                left--;
                right++;
            }
            if(right - left - 1 > maxlength){
                startidx = left + 1;
                maxlength = right - left - 1;
            }

            left = i;
            right = i+1;
            while(left >=0 && right < n && s[left] == s[right]){
                left--;
                right++;
            }
            if(right - left - 1 > maxlength){
                startidx = left + 1;
                maxlength = right - left - 1;
            }
            
        }
        return s.substr(startidx,maxlength);
    }
};