class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_set<int>s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
            if(s.find(target)!= s.end()){
            return i;
            }
        }
        return -1;
    }
};