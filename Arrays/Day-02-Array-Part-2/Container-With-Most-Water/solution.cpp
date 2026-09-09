class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int maxarea = 0;

        while (left < right) {
            int length = right - left;
            int width = min(height[left], height[right]);
            maxarea = max(maxarea, length * width);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxarea;
    }
};
