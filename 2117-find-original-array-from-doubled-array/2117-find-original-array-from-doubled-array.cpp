class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        sort(changed.begin(),changed.end());
        if(n%2 != 0)    return {};
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int nums : changed){
            freq[nums]++;
        }
        
        for(int num : changed){
            if(freq[num] == 0)  continue;

            if(freq[num*2] == 0)    return {};

            ans.push_back(num);
            freq[num]--;
            freq[num*2]--;
        }
        return ans;
    }
};