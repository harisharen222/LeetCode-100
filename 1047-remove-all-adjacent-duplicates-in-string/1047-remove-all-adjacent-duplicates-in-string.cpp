class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        stack<char>store;
        for(char ch : s){
            if(!store.empty() && store.top() == ch){
                store.pop();
            }
            else    store.push(ch);
        }
        string ans = "";
        while(!store.empty()){
            ans += store.top();
            store.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};