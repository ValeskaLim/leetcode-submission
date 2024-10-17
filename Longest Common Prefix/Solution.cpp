class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        int j = 0;
        int s_size = strs.size();
        if (s_size == 0) return "";

        int min_length = strs[0].size();
        string prefix;
        int flag = 0;

        for (i = 1; i < s_size; i++) {
            if (strs[i].size() < min_length) {
                min_length = strs[i].size();
            }
        }

        if (s_size == 1) {
            return strs[0];
        }

        for (i = 0; i < s_size; i++) {
            if (strs[i].empty()) {
                return "";
            }
        }

        for (i = 0; i < min_length; i++) {
            for (j = 0; j < s_size - 1; j++) {
                if (strs[j][i] == strs[j + 1][i]) {
                    flag++;
                } else {
                    flag = 0;
                    break;
                }
            }
            if (flag == s_size - 1) {
                prefix += strs[0][i];
            } else {
                break;
            }
            flag = 0;
        }

        return prefix;
    }
};
