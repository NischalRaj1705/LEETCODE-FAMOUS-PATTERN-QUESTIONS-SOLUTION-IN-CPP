class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                temp.push_back(tolower(s[i]));
            }
        }
        if (temp.size() <= 1) {
            return true;
        }
        int i = 0;
        int j = temp.length() - 1;
        while (i <= j) {
            if (temp[i] != temp[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};