class Solution {
    public boolean isPalindrome(int x) {
        int y=x;
        int digit;
        int num =0;
        for(int i=0;y>0;i++){
            digit = y%10;
            num=(num*10) + digit;
            y=y/10;
        }
        if(num==x){
            return true;
        }
        return false;

    }
}