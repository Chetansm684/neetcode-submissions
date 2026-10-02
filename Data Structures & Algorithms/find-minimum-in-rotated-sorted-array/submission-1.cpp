class Solution {
public:
    int findMin(vector<int> &nums) {
        int left= 0;
        int right = nums.size()-1;

        for(int i=0;i<nums.size();i++){
            int mid = left+(right-left)/2;

            if(nums[mid]>nums[right]){
                left = mid+1;
            }else{
                right = mid;
            }
        }
        return nums[right];
    }
};
