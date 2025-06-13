class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        vector<int> flat(n*n,0);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                flat[grid[i][j]-1]++;
            }
        }

        int repeated = -1, missing = -1 ;
        
        for(int i = 0 ; i < flat.size(); i++){
            if(flat[i]==0)
                missing = i + 1;
            else if(flat[i]==2)
                repeated = i + 1;
        }

        ans.push_back(repeated);
        ans.push_back(missing);

        return ans;
    }
};