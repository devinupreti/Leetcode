class Solution {
public:
    int maxArea(vector<int>& height) {
        int h;
        int width;
        int area = 0;
        int m = 0;
        int i = 0;
        int j = height.size()-1;
        while(i<j)
        {   
            h = min(height[i],height[j]);
            width = j-i;
            area = h*width;
            m = max(area, m);
            if (height[i] < height[j]) { i++; }
            else { j--; }
        }
        return m;
    }
};