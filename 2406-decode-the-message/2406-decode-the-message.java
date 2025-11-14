class Solution {
    public String decodeMessage(String key, String message) {
        HashMap<Character,Character> mpp = new HashMap<>() ;
        char ch = 'a' ;
        for(int i = 0 ; i < key.length() ; i++){
            if(key.charAt(i) == ' ')    continue ;
            if(!mpp.containsKey(key.charAt(i))){
                mpp.put(key.charAt(i) , ch);
                ch += 1 ;
            }
        }
        StringBuilder ans = new StringBuilder() ;
        for(int i = 0 ; i < message.length() ; i++){
            if(message.charAt(i) == ' ')    ans.append(' ');
            else ans.append(mpp.get(message.charAt(i)));
        }

        return ans.toString() ;
    }
}