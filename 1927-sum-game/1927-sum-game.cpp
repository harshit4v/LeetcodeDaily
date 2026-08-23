class Solution {
public:
    bool sumGame(string nums) {
        int lsum=0,rsum=0;
        int leftq=0,rightq=0;
        int n=nums.length();
        for(int i=0;i<n/2;i++){
            if(nums[i]=='?'){
                leftq++;
            }else{
                lsum+=nums[i]-'0';
            }
        }
        for(int i=n/2;i<n;i++){
            if(nums[i]=='?'){
                rightq++;
            }else{
                rsum+=nums[i]-'0';
            }
        }
        int qdiff=leftq-rightq;
        int sumdiff=lsum-rsum;
        if(qdiff%2==0 && sumdiff+9*(qdiff/2)==0){
            return false;
        }
        return true;
    }
};