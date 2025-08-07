class Solution {
public:
    bool checkFreq(vector<int>& freq){
        for(int& i : freq){
            if(i != 0)
                return 0 ;
        }
        return 1 ;
    }
    vector<int> findAnagrams(string s, string p) {
        /*int freq[26] = {0};
        vector<int> ans;
        int n = p.length();

        // Safe check
        if (s.length() < n)
            return ans;

        for (int i = 0; i < n; i++) {
            freq[p[i] - 'a']++;
        }

        for (int i = 0; i <= s.length() - n; i++) {
            int temp[26] = {0};
            bool flag = true;

            for (int j = i; j < i + n; j++) {
                temp[s[j] - 'a']++;
            }

            for (int k = 0; k < 26; k++) {
                if (temp[k] != freq[k]) {
                    flag = false;
                    break;
                }
            }

            if (flag)
                ans.push_back(i);
        }

        return ans;*/
        
        vector<int> freq(26,0) ;
        
        for(int i = 0 ; i < p.length() ; i++){
            freq[p[i]-'a']++;
        }

        int i = 0 , j = 0 ; 
        vector<int> ans ;

        while(j<s.length()){
            freq[s[j]-'a']--;

            if(j - i + 1 ==p.length()){
                if(checkFreq(freq))
                    ans.push_back(i);
                
                freq[s[i]-'a']++;
                i++;
            }

            j++;
        }

        return ans ;
    }
};
