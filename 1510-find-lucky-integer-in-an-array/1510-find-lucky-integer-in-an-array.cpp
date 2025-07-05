class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;
        sort(arr.begin(),arr.end());
        int i=0;
        int j=1;
        
        int luckynum = -1;
        while(j < arr.size() && i <= j){
            int count = 1;
            while(j < arr.size() && arr[j] == arr[j-1]){
                count++;
                j++;
            }
            if(count == arr[j-1]){
                luckynum = arr[j-1];
            }
            j++;
        }
        return luckynum;
    }
};