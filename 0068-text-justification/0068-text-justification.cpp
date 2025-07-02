class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int n = words.size();
        vector<int>count(n);
        for(int i=0 ; i<n ; i++){ // we got the length of each string 
            string curr = words[i];
            count[i] = curr.length();
        }

        vector<string> para; //final output
        int j=0;
        int i=j;
        while(j < n){
            int linelength = 0;
            string result = "";
            while(j<n && linelength + count[j] + (j-i) <= maxWidth){
                linelength += count[j];
                j++;
            }
            
            int totalspaces = maxWidth - linelength;
            int no_of_words = j-i;
            int no_of_gaps = j-i-1;

            if(j == n || no_of_words == 1){
                for(int k = i ; k<j ; k++){
                    result += words[k];
                    if(k < j-1) result += ' ';
                }
                while(result.length() < maxWidth){
                    result += ' ';
                }
            }
            else{
                int spacesbetween = totalspaces/(no_of_words - 1);
                int extraspaces = totalspaces % no_of_gaps;
                for(int k=i ; k<j ; k++){
                    result += words[k];
                    if(k < j-1){
                        int spaces = spacesbetween + (extraspaces-- > 0 ? 1 : 0);
                        result += string(spaces,' ');
                    }
                }
            }
            para.push_back(result);

            i = j;
            linelength = 0;
        }
        return para;
    }
};