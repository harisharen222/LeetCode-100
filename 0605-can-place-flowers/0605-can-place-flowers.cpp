class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int j = 0;
        int count = 0;
        while (j < flowerbed.size()) {
            if (flowerbed[j] == 0 && ((j == 0 || flowerbed[j - 1] == 0) &&
                (j == flowerbed.size() - 1 || flowerbed[j + 1] == 0))) {
                flowerbed[j] = 1;
                count++;
                j += 2;
            } else {
                j++;
            }
        }
        return count >= n ? true : false;
    }
};