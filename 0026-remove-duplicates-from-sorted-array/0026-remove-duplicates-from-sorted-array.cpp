class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int>st;
        vector<int>temp;

        for(int x : nums){
            if(!st.contains(x)){
                st.insert(x);
                temp.push_back(x);
            }
        }
        nums=temp;
        return nums.size();
    }
};