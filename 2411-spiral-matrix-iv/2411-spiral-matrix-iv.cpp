/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {    
        vector<vector<int>> mat(m,vector<int>(n,-1)) ;
        int rowMax = m - 1 , rowMin = 0 ;
        int colMax = n - 1 , colMin = 0 ;
        while(head && colMin <= colMax && rowMin <= rowMax){
            for(int j = colMin ; j <= colMax && head; j++){
                mat[rowMin][j] = head -> val;
                head = head -> next;
            }
            rowMin++ ;
            for(int i = rowMin ; i <= rowMax && head; i++){
                mat[i][colMax] = head -> val;
                head = head -> next;
            }
            colMax-- ;
            for(int j = colMax ; j >= colMin && head; j--){
                mat[rowMax][j] = head -> val;
                head = head -> next;
            }
            rowMax--;
            for(int i = rowMax ; i >= rowMin && head; i--){
                mat[i][colMin] = head -> val;
                head = head -> next ;
            }
            colMin++;
        }
        return mat ;
    }
};