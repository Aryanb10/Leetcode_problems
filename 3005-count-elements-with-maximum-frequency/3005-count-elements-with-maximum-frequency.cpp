class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>map;
        int mx=0;
        for(int s: nums){
            map[s]++;
        }
        for(auto x: map){
             mx = max(mx,x.second);
        }
        int ans=0;
        for(auto x: map){
            if(x.second==mx){
                ans+=x.second;
            }
        }
        return ans;
    }
};