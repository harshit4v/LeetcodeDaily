class Solution {
public:
    bool isPowerOfTwo(int n) {
        int flag=0;
        for(int i=0;i<=31;i++){
            if(n==pow(2,i)){
                flag++;
            }
        }
        if(flag!=0){
            return true;
        }
        else return false;
    }
};
