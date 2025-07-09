class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0 , j = 0 ;
        vector<int> res;
        while( i < nums1.size() && j < nums2.size() ){
            if(nums1[i] < nums2[j])
                res.push_back(nums1[i++]);
            else
                res.push_back(nums2[j++]);
        }
        while(i<nums1.size())
            res.push_back(nums1[i++]);
        while(j<nums2.size())
            res.push_back(nums2[j++]);
        int n = res.size() ; 
        if(n%2 != 0 )
            return (double)res[n/2];
        else {
           
            double ans = 0 ;
            ans = ((double)res[n/2] + (double)res[(n/2)-1])/2;
            return ans;
        }   
    }
};