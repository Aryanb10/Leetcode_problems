class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int>map;
        int num=0;
        string s;
        vector<vector<string>> ans;
        if(strs.size()<2){
            ans.push_back({strs[0]});
            return ans;
        }
        for(int i=0;i<strs.size();i++){
            s=strs[i];
            sort(s.begin(), s.end());
            if(!map.contains(s)){
                map.insert({s,num});
                ans.push_back({strs[i]});
                num++;
            }
            else{
                ans[map[s]].push_back({strs[i]});
            }
        }
        return ans;
    }
};