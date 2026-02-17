class Solution {
public:
    int rob(vector<int>& nums) {
        int prev_1, prev_2=0;
        for(auto n: nums){
            int dummy= max(prev_1+n, prev_2);
            prev_1=prev_2;
            prev_2=dummy;
        }
        return prev_2;
    }
};