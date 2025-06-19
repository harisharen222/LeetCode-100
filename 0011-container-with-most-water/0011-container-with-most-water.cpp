class Solution {
public:
    int areaofcontainer(int height,int width){
        int area = height * width;
        return area;
    }
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int ans = INT_MIN;
        int area = 0;
        while(i <= j){
            int width = j - i;
            int height_of_container = min(height[i],height[j]);
            area = areaofcontainer(height_of_container,width);
            ans = max(ans,area);
            if(height[j] > height[i])  i++;
            else    j--;
        }
        return ans;
    }

};