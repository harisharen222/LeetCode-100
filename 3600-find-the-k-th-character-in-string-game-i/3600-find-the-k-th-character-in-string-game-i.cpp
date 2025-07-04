class Solution {
public:
    char kthCharacter(int k) {
        vector<char>chars;
        chars.push_back('a');
        while(chars.size() < k){
            int n = chars.size();
            for(int i=0 ; i<n ; i++){
                if(chars[i] == 'z'){
                    chars.push_back('a');
                }
                else{
                    chars.push_back(chars[i]+1);
                }
            }
        }
        return chars[k-1];
    }
};