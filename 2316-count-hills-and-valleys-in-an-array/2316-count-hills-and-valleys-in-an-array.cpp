class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 1; i < n - 1; ++i) {
            // Skip duplicates
            if (nums[i] == nums[i - 1]) continue;

            int prev = i - 1;
            int next = i + 1;

            // Skip to next different value on the right
            while (next < n && nums[next] == nums[i]) {
                next++;
            }

            if (next >= n) continue;

            if ((nums[i] > nums[prev] && nums[i] > nums[next]) ||
                (nums[i] < nums[prev] && nums[i] < nums[next])) {
                count++;
            }
        }

        return count;
    }
};
