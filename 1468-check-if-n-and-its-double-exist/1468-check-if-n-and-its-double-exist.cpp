class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       bool ans = 0 ;
       for(int i = 0 ; i < arr.size() ; i++){
            for(int j = i + 1 ; j < arr.size() ; j++){
                
                if(arr[i] == 0 && arr[j] == 0)
                    return 1 ;
               if(arr[i] == 0 || arr[j] == 0)
                    continue;
                if(arr[i] == 2*arr[j] ||arr[j] == 2*arr[i] )
                    return 1;
            }
       }
       return ans; 
    }
};