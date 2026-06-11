class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> state;
        state.push(asteroids[0]);
        for(int i=1 ; i<asteroids.size() ; i++){
            bool destroyed = false;
            int curr = asteroids[i];
            while(!state.empty() && state.top() > 0 && curr < 0){
                int prev = state.top();
                if(abs(prev) > abs(curr)){
                    destroyed = true;
                    break;
                }
                else if(abs(prev) == abs(curr)){
                    state.pop();
                    destroyed = true;
                    break;
                }
                else{
                    state.pop();
                }
                
            }
            if(!destroyed){
                state.push(curr);
            }
        }
        vector<int>ans;
        while(!state.empty()){
            ans.push_back(state.top());
            state.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};