class Solution {
public:
    int search(int el,vector<int>& temp){
        int cnt = 0;
        for(int i = 0 ; i < temp.size() ; i++){
            if(temp[i]==el)
                cnt++;
        }
        if(cnt == 2)    return el;
        else            return -1;
    } 
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        vector<int> temp;
        int cnt = 0;
        sort(grid.begin(),grid.end());
        int el = -1 ;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size(); j++){
                temp.push_back(grid[i][j]);
                cnt += grid[i][j];
            }
        }
        for(int i = 0 ; i < temp.size() ; i++){
            el = search(temp[i],temp);
            if(el!=-1){
                ans.push_back(el);
                break;
            }
        }
        int sum = 0;
        for(int i = 1 ; i <= grid.size()*grid.size() ; i++){
            sum += i;
        }
        ans.push_back(sum+el-cnt);
        return ans;
    }
};