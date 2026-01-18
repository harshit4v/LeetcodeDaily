class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int n=nums.size(),maxi=0;
        // for(int i=0;i<nums.size();i++){
        //     maxi=max(maxi,nums[i]);
        // }
        // vector<int>hash(maxi+1,0);
        // for(int i=0;i<nums.size();i++){
        //     hash[nums[i]]++;
        // }
        // for(int i=0;i<hash.size();i++){
        //     if(hash[i]>1){
        //         return i;
        //     }
        // }
        // return -1;
        int slow=nums[0];
        int fast=nums[nums[0]];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        fast=0;
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
