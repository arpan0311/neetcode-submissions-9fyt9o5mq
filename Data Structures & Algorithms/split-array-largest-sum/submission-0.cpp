class Solution {
private:
    int divider(vector<int>& nums, int size) {
        int split = 0;
        int spliter = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (split + nums[i] <= size) {
                split += nums[i];
            } else {
                split=nums[i];
                spliter += 1;
            }
        }
        return spliter;
    }

public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            int mid = (low + high)/2;
            int division = divider(nums, mid);
            if (division > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};