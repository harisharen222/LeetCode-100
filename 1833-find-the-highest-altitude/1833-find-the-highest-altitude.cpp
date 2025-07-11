class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_altitude = 0;
        int prefixsum = 0;
        for(int i=0 ; i<gain.size() ; i++){
            prefixsum += gain[i];
            max_altitude = max(max_altitude,prefixsum);
        }
        return max_altitude;
    }
};