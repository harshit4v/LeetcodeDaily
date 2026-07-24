class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        long long ls=0,rs=0,n1=0,n2=0;
        int result=INT_MAX;
        int ind=0;
        for(int i=0;i<n;i++){
            ls+=nums[i];
            rs=sum-ls;
            n1=i+1;
            n2=n-n1;
            int l_avg=ls/n1;
            int r_avg=(i==n-1)?0:rs/n2;
            int diff=abs(l_avg-r_avg);
            if(result>diff){
                result=diff;
                ind=i;
            }
        }
        return ind;
    }
};