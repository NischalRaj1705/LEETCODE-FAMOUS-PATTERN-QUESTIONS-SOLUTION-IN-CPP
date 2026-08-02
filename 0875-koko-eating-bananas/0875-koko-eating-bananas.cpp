class Solution {
public:
    long long helper(vector<int>& piles, int mid) {

        long long  hour = 0;

        for(int i = 0; i < piles.size(); i++) {

            hour += (piles[i] + mid - 1) / mid;
        }

        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int hi = INT_MIN;
        int n = piles.size();
        for (int i = 0; i < piles.size(); i++) {
            hi = max(hi, piles[i]);
        }
        int ans;
        while (l <= hi) {
            int mid = l + (hi - l) / 2;
            if (h >= helper(piles, mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};