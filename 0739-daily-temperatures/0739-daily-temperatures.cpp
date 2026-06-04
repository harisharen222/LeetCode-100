class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> temps;
        int n = temperatures.size();
        vector<int>result(n,0);
        for(int i = 0 ; i<n ; i++){
            //remove elements when top < arr[i]

            while(!temps.empty() && temperatures[temps.top()] < temperatures[i]){
                int len = i - temps.top();
                result[temps.top()] = len;
                temps.pop();
            }
            temps.push(i);
        }
        return result;
    }
};