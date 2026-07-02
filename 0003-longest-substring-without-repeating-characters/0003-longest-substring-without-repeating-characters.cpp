class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int r=0, l=0, maxlen=0;
        int n=s.size();
        while(r<n){
            while (st.contains(s[r])){
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);
            maxlen= max(maxlen, r-l+1);
            r++;
        }
        return maxlen;
    }
};