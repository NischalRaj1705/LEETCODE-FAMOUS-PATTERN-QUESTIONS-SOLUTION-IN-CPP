class Solution {
public:
    int t[100 + 1][100 + 1];
   
    int helper(int i, int j) {
        if (i == 0 && j == 0) {
            return 1;
        }
        if (i < 0 || j < 0) {
            return 0;
        }
        if (t[i][j] != -1) {
            return t[i][j];
        }
        int up = helper(i - 1, j);
        int left = helper(i, j - 1);
        return t[i][j]=up + left;
    }
    int uniquePaths(int m, int n) {
        memset(t, -1, sizeof(t));
        int ans = helper(m - 1, n - 1);
        return ans;
    }
};