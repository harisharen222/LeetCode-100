class Solution {
public:
    int possibleStringCount(string word) {
        int i=0;
        int j=1;
        int count = 1;
        while(j < word.length() && i < word.length()){
            if(word[i] == word[j]){
                count++;
            }
            else{
                i = j;
            }
            j++;
        }
        return count;
    }
};