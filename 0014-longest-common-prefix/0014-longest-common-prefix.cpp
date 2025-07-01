class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        int i=1;
        
        while(i < strs.size()){
            string curr = strs[i];
            int j=0;
            string result = "";
            while(j < min(prefix.length(),curr.length())){
                if(prefix[j] == curr[j]){
                    result += prefix[j];
                }
                else    break;
                j++;
            }
            prefix = result;
            i++;
        }
        return prefix;
    }

};