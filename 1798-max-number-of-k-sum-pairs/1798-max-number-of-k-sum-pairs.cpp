class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int operations = 0;
        unordered_map<int,int> freq;
        for(int num : nums){
            // freq[num]++;
            int complement = k - num;
            if(freq[complement] > 0){
                
                operations++;
                freq[complement]--;
                
            }
            else{
                freq[num]++;
            }
        }
        return operations;
    }
};