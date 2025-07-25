class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size() ;
        vector<int> left(n,0), right(n,0);
        left[0] = height[0] ;
        for(int i = 1 ; i < height.size()  ; i++){
            left[i] = max(left[i-1], height[i]);
            
        }
        right[n-1] = height[n-1] ;
        for(int i = height.size() - 2 ; i >= 0  ; i--){
            right[i] = max(right[i+1],height[i]);
        }
        int water = 0 ;
        for(int i = 1 ; i < height.size() - 1 ; i++){
            water += min(left[i],right[i]) - height[i];
        }
        return water ;
    }
};