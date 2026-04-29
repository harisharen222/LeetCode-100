class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> count;
        for(int n : nums1){
            count[n]++;
        }

        vector<int>result;
        for(int num : nums2){
            if(count[num] > 0){
                result.push_back(num);
                count[num]--;
            }
        }
        return result;
    }
};