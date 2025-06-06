class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n == 1){
            return arr[0];
        }
        if(arr[0]>arr[1])   return arr[0];
        if(arr[n-1]>arr[n-2])   return arr[n-1];
        int st = 1;
        int end = arr.size()-2;
        while(st <= end){
            int mid = st + ((end-st)/2);
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid] > arr[mid-1]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
};