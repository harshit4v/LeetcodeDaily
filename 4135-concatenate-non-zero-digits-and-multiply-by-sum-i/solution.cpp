class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string st="";
        for(char c:s){
            if(c!='0'){
                st+=c;
            }
        }
        if(st.empty()){
            return 0;
        }
        int num=stoi(st);
        long long  m=num;
        long long  sum=0;
        while(m>0){
            int digit=m%10;
            sum+=digit;
            m/=10;
        }
        long long  ans=1LL*num*sum;
        return ans;
    }
};
