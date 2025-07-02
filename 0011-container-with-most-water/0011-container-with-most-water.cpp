class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int area = 0;
        while(i<j){
            int len = min(height[i],height[j]);
            int hei = abs(j-i);
            int curr = len * hei;
            area = max(area, curr);
            if(height[i] < height[j])   i++;
            else    j--; 
        }
        return area;
    }
};