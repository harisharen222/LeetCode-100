class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        vector<bool> visited(n, false);
        vector<int> counts;
        for (int i = 0; i < n; i++) {
            if (visited[i] == true)
                continue;
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    visited[j] = true;
                    count++;
                }
            }
            counts.push_back(count);
        }
        bool flag = true;
        for(int i=0 ; i<counts.size() ; i++){
            for(int j=i+1 ; j<counts.size() ; j++){
                if(counts[i] == counts[j]){
                    flag = false;
                }
            }
        }
        if(!flag){
            return false; 
        }
        else{
            return true;
        }
    }
};