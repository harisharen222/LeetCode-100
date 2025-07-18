class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;  // Just add 1 and return
                return digits;
            }
            digits[i] = 0;  // Carry over
        }

        // If all digits were 9, we reach here, e.g., 999 + 1 = 1000
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
