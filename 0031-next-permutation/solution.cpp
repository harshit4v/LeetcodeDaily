class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind1=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind1=i;
                // swap(nums[i],nums[i+1]);
                break;
            }
        }
        if(ind1==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        for(int i = nums.size()-1; i > ind1; i--){
            if(nums[i]>nums[ind1]){
                swap(nums[i],nums[ind1]);
                break;
            }
        }
         sort(nums.begin()+ind1+1,nums.end());

    }
};
