class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp ;
        priority_queue<pair<int,char>> heap ;
        for(auto& c : s)    mpp[c]++;
        for(auto [c,freq] : mpp)    heap.push({freq,c});
        string ans = "" ;
        while(!heap.empty()){
            ans += string(heap.top().first,heap.top().second);
            heap.pop();
        } 
        return ans ;
    }
};