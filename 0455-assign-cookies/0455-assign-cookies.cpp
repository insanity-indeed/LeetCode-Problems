class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int left = 0 ;
        int right = 0 ;
        int ans = 0 ;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        while(left<g.size() && right<s.size()){
            if(g[left]<=s[right]){
                ans++;
                left++;
            }
            right++;
        }
        return ans;

    }
};