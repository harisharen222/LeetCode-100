class Solution {
public:
    bool isVowel(char c){
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    bool isValid(string word) {
        if(word.length() < 3)   return false;
        int count1 = 0,count2 = 0;
        for(char ch : word){
            if(isalnum(ch)){
                if(isalpha(ch)){
                    if(isVowel(tolower(ch))){
                        count1++;
                    }
                    else{
                        count2++;
                    }
                }
            }
            else{
                return false;
            }
        }
        return (count1 >= 1 && count2 >= 1);
    }
};