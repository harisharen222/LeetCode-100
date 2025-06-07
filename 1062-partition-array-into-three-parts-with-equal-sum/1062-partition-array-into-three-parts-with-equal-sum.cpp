class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        for(int num : arr){
            sum += num;
        }
        int target = sum/3;
        if(sum % 3 != 0)   return false;
        int currentsum = 0;
        int grp = 0;
        for(int i=0 ; i<arr.size() ; i++){
            currentsum += arr[i];
            if(currentsum == target){
                grp++;
                currentsum = 0;
                if(grp == 2 && i<(arr.size()-1))    return true;
            }
        }
        return false;
    }
};