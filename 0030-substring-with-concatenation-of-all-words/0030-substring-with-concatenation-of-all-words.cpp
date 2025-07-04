class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        unordered_map<string,int>freq1;
        for(string s : words){
            freq1[s]++;
        }
        vector<int>ans;
        int wordlen = words[0].length();
        int total_len = s.length();
        if(wordlen > total_len) return {};
        for(int i=0 ; i<wordlen ; i++){
            unordered_map<string,int>freq2;
            int windowstart = i;
            int count = 0;
            for(int j=i ; j+wordlen <= total_len ; j += wordlen){
                string curr = s.substr(j,wordlen);
                freq2[curr]++;
                count++;
                if(count >= words.size()){
                    if(freq1 == freq2){
                        ans.push_back(windowstart);
                    }
                    string leftword = s.substr(windowstart,wordlen);
                    freq2[leftword]--;
                    if(freq2[leftword] == 0)    freq2.erase(leftword);
                    windowstart += wordlen;
                }
            }
        }
        return ans;
    }
};