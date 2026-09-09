class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxLength = 0;
        unordered_set<char> seen;

        for (int right = 0; right < s.size(); right++) {
            while (seen.count(s[right])) {
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            int currentLength = right - left + 1;
            maxLength = max(maxLength, currentLength);
        }
        return maxLength;
    }
};
