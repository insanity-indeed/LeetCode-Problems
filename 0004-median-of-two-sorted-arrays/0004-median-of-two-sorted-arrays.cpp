class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        /*int i = 0 , j = 0 ;
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
        }*/
        int n = nums1.size() + nums2.size() ;
        int ind1 = n / 2 ;
        int ind2 = n / 2 - 1 ;
        int element1 = -1 , element2 = -1 ;
        int cnt = 0 ;
        int i = 0 , j = 0 ;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] < nums2[j]){
                if(ind1 == cnt) element1 = nums1[i];
                if(ind2 == cnt) element2 = nums1[i]; 
                i++;
                cnt++;
            }
            else{
                if(ind1 == cnt) element1 = nums2[j];
                if(ind2 == cnt) element2 = nums2[j]; 
                j++;
                cnt++;
            }
        }
        while(i<nums1.size()){
            if(ind1 == cnt) element1 = nums1[i];
            if(ind2 == cnt) element2 = nums1[i]; 
            i++;
            cnt++;
        }  
        while(j<nums2.size()){
            if(ind1 == cnt) element1 = nums2[j];
            if(ind2 == cnt) element2 = nums2[j]; 
            j++;
            cnt++;
        }
        if(n%2 != 0)    return element1;
        else    return (double)(element1 + element2)/2; 
    }
};