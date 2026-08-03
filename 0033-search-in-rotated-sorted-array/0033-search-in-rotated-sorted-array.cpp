class Solution {
public:
    int binary_search(vector<int>& nums, int target, int s, int e) {
        int low = s;
        int high = e;
        while (low <= high) {
            int guess = (low + high) / 2;
            if (nums[guess] == target)
                return guess;
            if (nums[guess] > target)
                high = guess - 1;
            if (nums[guess] < target)
                low = guess + 1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int res = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[nums.size() - 1]) {
                low = mid + 1;
            } else {
                res = mid;
                high = mid - 1;
            }
        }
        int s1 = -1;
        int s2 = -1;
        s1 = binary_search(nums, target, 0, res - 1);
        s2 = binary_search(nums, target, res, nums.size() - 1);
        if (s1 == -1) {
            return s2;
        } else if (s2 == -1) {
            return s1;
        }
        return -1;
    }
};