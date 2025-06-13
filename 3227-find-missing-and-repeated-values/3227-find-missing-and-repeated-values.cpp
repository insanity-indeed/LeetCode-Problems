class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        vector<int> flat;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                flat.push_back(grid[i][j]);
            }
        }

        sort(flat.begin(), flat.end());
        int repeated = -1, missing = -1,sum = 0 , nos = n*n ;
        int total = (nos*(nos+1)) / 2;

        for(int i = 0; i < flat.size(); i++){
            if(i > 0 && flat[i] == flat[i - 1]){
                repeated = flat[i];
            }
            sum += flat[i];
        }
        missing = total + repeated - sum;
        // If missing not found in loop (case when last number is missing)
        if(missing == -1) missing = n * n;

        ans.push_back(repeated);
        ans.push_back(missing);

        return ans;
    }
};