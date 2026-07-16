class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int middle = 0;
        while (middle <= end) {
            if (nums[middle] == 0) {
                swap(nums[middle], nums[start]);
                start++;
                middle++;
                continue;
            }
            if (nums[middle] == 1) {
                middle++;
                continue;
            }
            if (nums[middle] == 2) {
                swap(nums[middle], nums[end]);
                end--;
                continue;
            }
        }
        // for(int ele:nums){
        //     cout<<ele<<""
        // }
    }
};