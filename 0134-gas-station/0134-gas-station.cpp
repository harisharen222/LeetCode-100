class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int st = 0;
        int totalgas = 0, fuel = 0;
        int totalcost = 0;
        int n = gas.size();
        for(int i=0 ; i<n ; i++){
            totalgas += gas[i];
            totalcost += cost[i];
            fuel += gas[i]-cost[i];
            if(fuel < 0){
                st = i+1;
                fuel = 0;
            }
        }
        return (totalgas < totalcost) ? -1 : st;
    }
};