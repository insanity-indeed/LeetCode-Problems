class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int row = items.size() ;
        int cnt = 0 ;
        int ind = 0 ;
        switch(ruleKey){
            case "type" : ind = 0 ;    break ;
            case "color" : ind = 1 ;    break ;
            case "name" : ind = 2 ;    break ;
        }
        for(List item : items){
            if(item.get(ind).equals(ruleValue)) cnt++ ;
        }
        return cnt ;
    }
}