class Solution {
public:
    void merge(vector<int> &arr, int low , int mid , int high ){
        int i = low , j = mid + 1 ;
        vector<int> temp ;
        while(i<=mid && j <= high){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=high){
            temp.push_back(arr[j]);
            j++;
        }
        for(int i = low ; i <= high ; i++){
            arr[i] = temp[i-low] ;
        }

    }
    int mergesort(vector<int> &arr, int low, int high){
        int cnt = 0 ;
        if(low >= high)   return cnt;
        int mid = low + (high - low)/2 ;
        cnt += mergesort(arr,low,mid);
        cnt += mergesort(arr,mid+1,high);
        cnt += reversePair(arr,low,mid,high);
        merge(arr,low,mid,high);
        return cnt;
    }
    int reversePair(vector<int> &arr, int low , int mid , int high ){
        int cnt = 0 ;
        int j = mid + 1 ;
        for(int i = low ; i <= mid ; i++){
            while(j <= high && (double)arr[i]  >  (double)2 * arr[j])
                j++;
            cnt += j - (mid + 1) ; 

        }
        return cnt ;
    }
    int reversePairs(vector<int>& arr) {
        int cnt =  mergesort(arr,0,arr.size()-1);
        return cnt ;  
    }
};