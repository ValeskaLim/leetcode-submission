class Solution {
public:
    bool isPalindrome(int x) {
        string string_x = to_string(x);
        int n = string_x.length();

        if (x < 0)
            return false;
        
        for (int i = 0; i < n / 2; i++) {
            if (string_x[i] != string_x[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
};