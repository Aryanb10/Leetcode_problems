class Solution {
public:
    int findMin(vector<int>& nums) {
        vector<int>ray;
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};