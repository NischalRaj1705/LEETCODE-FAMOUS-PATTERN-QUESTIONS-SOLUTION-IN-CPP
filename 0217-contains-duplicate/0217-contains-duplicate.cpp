class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mq;
        for (int i = 0; i < nums.size(); i++) {
            mq[nums[i]]++;
        }
        for (auto i : mq) {
            if (i.second >= 2) {
                return true;
            }
        }
        return false;
    }
};