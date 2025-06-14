class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long prev = 1 , i = 1;
        ans.push_back(prev);
        while(rowIndex>0){
            prev = (prev * rowIndex--)/i++;
            ans.push_back(prev); 
        }
        return ans;
    }
};