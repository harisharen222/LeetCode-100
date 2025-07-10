class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int reader = 0;
        int writer = 0;

        while(reader < n){
            char current = chars[reader];
            int count = 0;
            while( reader < n && chars[reader] == current){
                reader++;
                count++;
            }

            chars[writer++] = current;
            if(count > 1){
                string countstr = to_string(count);
                for(char c : countstr){
                    chars[writer++] = c;
                }
            }
            
        }
        return writer;
    }
};