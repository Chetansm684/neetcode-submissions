class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        int longest = 0;

        for(int num : nums){
            seen.insert(num);
        }

        for(int num : seen){
            if(seen.find(num-1)==seen.end()){
                int current = num;
                int count =1;
                while(seen.find(current+1)!=seen.end()){
                    current++;
                    count++;
                }
                longest = max(count, longest);
            }
        }
        return longest;
    }
};
