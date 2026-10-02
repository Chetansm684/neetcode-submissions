class Solution {
   public:
    bool isValid(string s) {
        while (true) {
            bool found = false;

            for (int i = 0; i < s.length(); i++) {
                if ((s[i] == '(' && s[i + 1] == ')') || 
                    (s[i] == '[' && s[i + 1] == ']') || 
                    (s[i] == '{' && s[i + 1] == '}')) {
                    s.erase(i, 2); 
                    found = true;
                    break;
                }
            }
            if (!found) {
                found = false;
                break;
            }
        }
        return s.empty();
    }
};
