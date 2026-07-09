class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> fq;
        int low = 0;
        int high = 0;
        int res = INT_MIN;
        for (high = 0; high < s.size(); high++) {
            fq[s[high]]++;
            int k = high - low + 1;
            while (fq.size() < k) {
                fq[s[low]]--;
                if (fq[s[low]] == 0)
                    fq.erase(s[low]);
                low++;
                k = high - low + 1;
            }

            int len = high - low + 1;
            res = max(res, len);
        }
        return s.size() == 0 ? 0 : res;
    }
};