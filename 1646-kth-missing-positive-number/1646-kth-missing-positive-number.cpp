class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        /*int missCount = 0;
        int curr = 1;
        int i = 0;

        while (missCount < k) {
            if (i < arr.size() && arr[i] == curr) {
                i++;
            } else {
                missCount++;
                if (missCount == k) return curr;
            }
            curr++;
        }
        */
        

        for(int i = 0 ; i < arr.size() ; i++){
            if(k>=arr[i])
                k++;
            else
                return k;
        }

        return k;     
    }
};