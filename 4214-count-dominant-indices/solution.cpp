class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int rsum=0,cnt=0;
        for(int i=nums.size()-1;i>=0;i--){
           int rcount=nums.size()-i-1;
        if(rcount>0 && nums[i]*rcount>rsum){cnt++;}
        rsum+=nums[i];
        }
        return cnt;
    }
};
