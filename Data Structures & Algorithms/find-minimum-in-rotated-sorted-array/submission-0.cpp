class Solution {
public:
    int findMin(vector<int> &nums) {
        int minvalue = nums[0];
        for(int i=0;i<nums.size();i++){
            minvalue = min(minvalue, nums[i]);
        }
        return minvalue;
    }
};
