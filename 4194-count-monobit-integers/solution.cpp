class Solution {
public:
    bool number(int n){
        if(n==0)return true;
        int i=-1;
        while(n){
            if(i!=-1&&i!=n%2)return false;
            i=n%2;
            n=n/2;
        }
        return true;
    }
    int countMonobit(int n) {
        int cnt=0;
        for(int i=0;i<=n;i++){
            if(number(i))cnt++;
        }
        return cnt;
    }
};
