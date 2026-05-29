class Solution {
public:
    int rob(vector<int>& nums) {
        int prev_1=0, prev_2=0;
        for(int n: nums){
            int curr= max(prev_1+n, prev_2);
            prev_1=prev_2;
            prev_2=curr;
        }
        return prev_2;
    }
};