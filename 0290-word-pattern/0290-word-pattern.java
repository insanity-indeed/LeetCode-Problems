class Solution {
    public boolean wordPattern(String pattern, String s) {
        HashMap<Character , String> mpp = new HashMap<>() ;
        String[] parts = s.split("\\s+");

        if(parts.length != pattern.length())    return false ;

        for(int i = 0 ; i < pattern.length() ; i++){
            if(mpp.containsKey(pattern.charAt(i))){
                if(!mpp.get(pattern.charAt(i)).equals(parts[i]))    return false ;
            }
            else if(mpp.containsValue(parts[i])){
                if(!mpp.containsKey(pattern.charAt(i)))  return false;
            }
            else
                mpp.put(pattern.charAt(i),parts[i]);
        }

        return true ;
    }
}