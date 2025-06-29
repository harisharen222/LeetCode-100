class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int m = nums.size();
        set<int> s(nums.begin(),nums.end());
        int n = s.size();
        nums.assign(s.begin(),s.end());
        nums.resize(m);
        return n;
    }
};