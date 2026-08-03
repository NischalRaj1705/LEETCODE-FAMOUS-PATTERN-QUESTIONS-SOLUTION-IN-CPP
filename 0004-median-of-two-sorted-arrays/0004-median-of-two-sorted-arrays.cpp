class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int n = nums1.size();
        int m = nums2.size();
        int prev = 0;
        int curr = 0;
        int total=n+m;
        for (int count = 0; count <= total / 2; count++) {
            prev = curr;
            if (i < n && j < m) {

                if (nums1[i] <= nums2[j]) {
                    curr = nums1[i++];
                } else if (nums1[i] >= nums2[j]) {
                    curr = nums2[j++];
                }
            } else if (i < n)
                curr = nums1[i++];
            else if (j < m)
                curr = nums2[j++];
        }
        if (total % 2 == 1)
            return curr;
        else
            return (curr + prev) / 2.0;
    }
};