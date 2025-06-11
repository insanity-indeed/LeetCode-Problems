class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = -1;
        vector<bool> res;
        for(auto it : candies){
            maxi = max(it , maxi);
        } 
        for(auto it : candies){
            if(it+extraCandies >= maxi){
                //maxi = it+extraCandies;
                res.push_back(1);
            }
            else
                res.push_back(0);
        }  
        return res;
    }
};