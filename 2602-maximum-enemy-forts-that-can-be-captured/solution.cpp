class Solution {
public:
    int captureForts(vector<int>& nums) {
        int prev=-1,maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                if(prev!=-1 && nums[i]!=nums[prev]){
                    maxi=max(maxi,i-prev-1);
                }
                prev=i;
            }
        }
        return maxi;
    }
};
