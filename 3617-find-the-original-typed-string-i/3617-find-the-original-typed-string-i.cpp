class Solution {
public:
    int possibleStringCount(string word) {
        int j=1;
        int count = 1;
        while(j < word.length()){
            if(word[j] == word[j-1]){
                count++;
            }
            j++;
        }
        return count;
    }
};