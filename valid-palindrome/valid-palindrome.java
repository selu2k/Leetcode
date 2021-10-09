class Solution {
    public boolean isPalindrome(String s) {
        String newstr ;
        newstr = s.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        // newstr = newstr.replace(":","");
        // newstr = newstr.replace(",","");
        // newstr = newstr.toLowerCase();
        for(int i =0;i<newstr.length();i++){
            if(newstr.charAt(i)!=newstr.charAt(newstr.length()-1-i)){
                return false;
            }
        }
        return true;
    }
}