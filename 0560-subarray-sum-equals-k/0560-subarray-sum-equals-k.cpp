class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        
        vector<int> prefix(n,0);
        prefix[0] = nums[0];
        for(int i=1 ; i<n ; i++){
            prefix[i] = prefix[i-1] + nums[i];
        }

        unordered_map<int,int>m;
        m[0] = 1;
        for(int j=0 ; j<n ; j++){
            int val = prefix[j] - k;
            if(m.find(val) != m.end()){
                count += m[val];
            }

            if(m.find(prefix[j]) == m.end() ){
                m[prefix[j]] = 0;
            }
            m[prefix[j]]++;
        }
        return count;
    }
};