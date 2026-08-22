class Solution {
public:
    bool checkDivisibility(int n) {
        int pro=1;
        int sum=0;
        int num=n;
        while(num!=0){
            int digit=num%10;
            pro*=digit;
            sum+=digit;
            num/=10;
        }
        int d=pro+sum;
        if(n%d==0){
            return true;
        }else{
            return false;
        }
    }
};