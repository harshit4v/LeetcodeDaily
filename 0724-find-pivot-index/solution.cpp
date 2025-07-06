class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    //     int lsum=0,rsum=0;
    //     int tsum=0,pindex=-1;
    //     for(int i=0;i<nums.size();i++){
    //         tsum+=nums[i];
    //     }
    //     for(int i=0;i<nums.size();i++){
    //     if(lsum==tsum - lsum - nums[i]){
    //         return i;
    //         lsum+=nums[i];
    //      }
    //     }
    //      return -1;
    // }
     int total = 0;
        for (int num : nums)
            total += num;

        int left_sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (left_sum == total - left_sum - nums[i])
                return i;
            left_sum += nums[i];
        }
        return -1; // No pivot index found
    }
};
