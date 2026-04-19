class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> rightMax(n);

        // Step 1: build rightMax[]
        rightMax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(height[i], rightMax[i + 1]);
        }

        // Step 2: traverse and maintain leftMax
        int leftMax = 0;
        int water = 0;

        for (int i = 0; i < n; i++) {
            leftMax = max(leftMax, height[i]);
            if( min(leftMax, rightMax[i]) - height[i]>0){
                water+=min(leftMax, rightMax[i]) - height[i];
            }
        }

        return water;
    }
};