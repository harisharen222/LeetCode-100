class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        vector<bool> flag(n,false);

        for(int i=0 ; i<n ; i++){
            int j = 0;
            while(j < n){
                if(fruits[i] <= baskets[j]){
                    baskets[j] = -1;
                    flag[i] = true;
                    break;
                }
                j++;
            }
        }
        int count = 0;
        for(bool s : flag){
            if(!s){
                count++;
            }
        }
        return count;
    }
};