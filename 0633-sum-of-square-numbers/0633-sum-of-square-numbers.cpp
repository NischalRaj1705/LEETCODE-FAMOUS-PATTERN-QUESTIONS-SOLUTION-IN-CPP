class Solution {
public:
    bool judgeSquareSum(int c) {
        
        int root = sqrt(c);
        int arr[root + 1];
        for (int i = 0; i < root + 1; i++) {
            arr[i] = i;
        }
        int l = 0;
        int r = root;
        while (l <= r) {
         long long sum = 1LL * l * l + 1LL * r * r;
            if (sum == c) {
                return true;
            } else if (sum < c) {
                l++;
            } else {
                r--;
            }
        }
        return false;
    }
};