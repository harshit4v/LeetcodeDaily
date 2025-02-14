class Solution {
    public boolean isUgly(int n) {
        if(n<=0) return false;
       int []res={2,3,5};
       for(int i=0;i<res.length;i++){
        while(n%res[i]==0){
            n/=res[i];
        }
       }
       return n==1;
    }
}
