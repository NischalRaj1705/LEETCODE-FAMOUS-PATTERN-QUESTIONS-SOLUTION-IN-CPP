class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN; // maxwater isme store hoga
        int n = height.size();
        int l = 0;
        int r = n - 1;
        while (l <= r) {
            int width = r - l;
            int ht = min(height[l], height[r]);
            int area = ht * width;
            ans = max(ans, area);
            if (height[l] > height[r]) {
                r--;
            } else
                l++;
        }
        return ans;
    }
};