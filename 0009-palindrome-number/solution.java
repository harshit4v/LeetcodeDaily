class Solution {
    public boolean isPalindrome(int x) {
        int m=x,rev=0;
        if(m<0) return false;
        else{
            while(m!=0){
                int rem=m%10;
                rev=rev*10+rem;
                m/=10;
            }
            if(rev == x) return true;
            else return false;
        }
    }
}
