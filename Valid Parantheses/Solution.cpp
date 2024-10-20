class Solution {
public:
    bool isValid(string s) {
        int length = s.length();
        stack<char> stack;
        for(int i = 0; i < length; i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if(stack.empty()) {
                    return false;
                }

                char top = stack.top();
                stack.pop();

                if(top != '(' && s[i] == ')' || top != '[' && s[i] == ']' || top != '{' && s[i] == '}')
                    return false;

            }
        }

        return stack.empty();
    }
};
