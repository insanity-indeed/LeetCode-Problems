class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        /*int i = 0 , j = numbers.size()-1;
        while(i<j){
            if(numbers[i] + numbers[j] == target)
                return {i+1,j+1};
            else if(numbers[i] + numbers[j] < target)
                i++;
            else
                j--;
        }     
        return {-1,-1};*/
        map<int,int> mpp ;
        for(int i = 0 ; i < numbers.size() ; i++){
            int more = target - numbers[i] ;
            if(mpp.find(more) != mpp.end())
                return {mpp[more]+1,i+1};
            mpp[numbers[i]] =  i ;
        }
        return {-1,-1} ;
    }
};