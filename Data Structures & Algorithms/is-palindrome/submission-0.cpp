class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        for(const auto c:s){
            if(isalnum(c)){
                newStr += tolower(c);
            }
        }
        return newStr == string(newStr.rbegin(),newStr.rend());
    }
};
