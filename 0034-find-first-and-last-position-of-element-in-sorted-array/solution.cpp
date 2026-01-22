class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ind=-1,i=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ind=i;
                break;
            }
        }
        if(ind == -1) return {-1,-1};
        int j=ind+1,ind2=ind;
        while(j<nums.size()&&nums[j]==target){
            ind2=j;
            j++;
        }
        return{ind,ind2};
    }
};
