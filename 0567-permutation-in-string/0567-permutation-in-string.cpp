class Solution {
public:
    bool checkequal(int count1[26],int count2[26]){
        for(int i=0 ; i<26 ; i++){
            if(count1[i] != count2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length())   return false;
        int count1[26] = {0};
        int count2[26] = {0};
        for(int i=0 ; i<s1.length() ; i++){
            int index = s1[i]-'a';
            count1[index]++;
            index = s2[i]-'a';
            count2[index]++;
            
        }
        if(checkequal(count1,count2))   return true;
        int window_size = s1.length();
        for(int i=s1.length() ; i<s2.length(); i++){
            
            int index = s2[i] - 'a';
            count2[index]++;
            int oldindex = s2[i-window_size]-'a';
            count2[oldindex]--;
            if(checkequal(count1,count2))   return true;
        }
        return false;
    }
};