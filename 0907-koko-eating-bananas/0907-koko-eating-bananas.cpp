class Solution {
public:
    bool canEatAll(vector<int>& piles, int h,int k){
        int hours = 0;
        for(int num : piles){
            hours += ceil(num/double(k));
        }
        return hours <= h ? 1 : 0;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int mid = (low + high)/2;
        while(low < high){
            if(canEatAll(piles,h,mid)){
                high = mid;
            }
            else{
                low = mid+1;
            }
            mid = (low+high)/2;
        }
        return high;
    }
};