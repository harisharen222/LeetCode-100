class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        int n = events.size();
        int i=0,days = 1,res = 0;

        while(i<n || !pq.empty()){

            while(i<n && events[i][0] == days){
                pq.push(events[i][1]);
                i++;
            }
            while(!pq.empty() && pq.top() < days){
                pq.pop();
            }
            if(!pq.empty()){
                pq.pop();
                res++;
            }
            days++;
        }
        return res;
    }
};