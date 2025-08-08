class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        /*int n = strs.size() ;
        unordered_map<string , vector<string>> mpp; 
        vector<vector<string>> ans;

        for(int i = 0 ; i < n ; i++){
            string temp = strs[i];
            sort(begin(temp),end(temp));
            mpp[temp].push_back(strs[i]);
        }

        for(auto it : mpp){
            ans.push_back(it.second);
        }

        return ans ; */
        int n = strs.size() ;
        unordered_map<string , vector<string>> mpp ; 
        vector<vector<string>> ans ;

        for(int i = 0 ; i < n ; i++){
            vector<int> temp(26,0);
            for(auto c : strs[i])   temp[c-'a']++;

            string str = "" ;
            for (int j = 0; j < 26; j++) {
        str += to_string(temp[j]) + "#"; // store counts
    }

            mpp[str].push_back(strs[i]);
        }

        for(auto it : mpp){
            ans.push_back(it.second);
        }

        return ans ;           
    }
};