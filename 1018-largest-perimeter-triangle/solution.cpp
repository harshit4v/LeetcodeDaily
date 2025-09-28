// class Solution {
// public:
//     int largestPerimeter(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int i=0;
//         int low=nums[i];
//         int high=nums[nums.size()-1];
//         while(low<=high){
//             if(low+nums[i+1]>high){
//                 return 
//             }
//         }
//     }
// };
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // Check from largest triplet backwards
        for (int i = n - 1; i >= 2; i--) {
            if (nums[i-2] + nums[i-1] > nums[i]) {
                return nums[i-2] + nums[i-1] + nums[i];
            }
        }
        return 0; // No valid triangle found
    }
};

