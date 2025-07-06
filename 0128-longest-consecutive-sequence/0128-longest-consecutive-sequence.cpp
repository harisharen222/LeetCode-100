class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers(nums.begin(), nums.end());
        int maxLen = 0;

        for (int num : numbers) {
            if (numbers.find(num - 1) == numbers.end()) {
                int currentNum = num;
                int streak = 1;

                while (numbers.find(currentNum + 1) != numbers.end()) {
                    currentNum++;
                    streak++;
                }

                maxLen = max(maxLen, streak);
            }
        }

        return maxLen;
    }
};
