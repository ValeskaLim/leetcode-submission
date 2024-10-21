class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int count = 0;

        for(int j = 0; j < s.length(); j++) {
            if(s[i] != ' ') {
                count++;
                i--;
            }
            else if(count == 0 && s[i] == ' ') {
                i--;
            }
        }
        
        return count;
    }
};