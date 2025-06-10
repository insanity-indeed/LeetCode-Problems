class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> res;
        for(auto i : nums){
            if(i>0) pos.push_back(i);
            else    neg.push_back(i);
        }
        int posi = 0 , negi = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i==0||i%2 == 0){
                res.push_back(pos[posi]);
                posi++;
            }
            else{
                res.push_back(neg[negi]);
                negi++;
            }
        }
        return res;
    }
};
