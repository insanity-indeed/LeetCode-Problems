class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0 ;
        vector<int> v ;
        for(int i = 0 ; i <  n ; i++){
            //v.push_back = i ;
            ans ^= start + 2 * i ; ;
        }
        return ans;
    }
};