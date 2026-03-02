class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int left=i+1;
            int right=nums.size()-1;
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            while(left<right){
                int currsum=nums[i]+nums[left]+nums[right];
                if(currsum<0){
                    left++;
                }
                else if(currsum>0){
                    right--;
                }
                else{
                    sum.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1]) left++;
                    while(left<right && nums[right]==nums[right+1]) right--;
                }
            }
        }
        return sum;
    }
};