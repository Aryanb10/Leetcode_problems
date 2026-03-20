class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>res;
        int i=0, j=0, pos=0;
        double med=0;
        
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }
            else{
                res.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            res.push_back(nums1[i]);
            i++;
        }
        
        while(j<nums2.size()){
            res.push_back(nums2[j]);
            j++;
        }
        int n = res.size();
        if(n%2==0){
            pos = n/2;
            med = (res[pos]+res[pos-1])/2;
        }
        else{
            pos = (n-1)/2;
            med = res[pos];
        }
        return med;
    }
};