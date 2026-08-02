class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0;
        int high = m - 1;

        // Binary Search to find the correct row
        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (target < matrix[mid][0]) {
                high = mid - 1;
            }
            else if (target > matrix[mid][n - 1]) {
                low = mid + 1;
            }
            else {
                // Target lies in this row, now apply binary search

                int left = 0;
                int right = n - 1;

                while (left <= right) {

                    int md = left + (right - left) / 2;

                    if (matrix[mid][md] == target)
                        return true;

                    else if (matrix[mid][md] < target)
                        left = md + 1;

                    else
                        right = md - 1;
                }

                return false;
            }
        }

        return false;
    }
};