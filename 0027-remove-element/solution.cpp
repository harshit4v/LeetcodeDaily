class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int index=0;
        vector<int>res;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[index]=nums[i];
                index++;
            }
        }
        // int s=nums.size();
        return index;
    }
};
