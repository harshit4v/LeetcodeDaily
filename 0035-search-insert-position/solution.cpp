class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int mid=high+(low-high)/2;
        int low1=-1,high1=-1;
        bool found1=false,found2=false;
        while(low<=high){
            if(nums[mid]<target){
                low=mid+1;
                if(target-nums[mid]==1){
                    found1=true;
                    low1=low;
                }
            }
            else if(nums[mid]>target){
                high=mid-1;
                if(target-nums[mid]==1) {
                    found2=true;
                    high1=high;
                }
                
            }
            else{
                return mid;
            }
            mid=high+(low-high)/2;
        }
        if(found1)return low1;
        if(found2)return high1;
        return low;
    }
};
