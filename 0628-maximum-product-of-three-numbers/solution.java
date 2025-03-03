class Solution {
    public int maximumProduct(int[] nums) {
        // int pro=1;
        // int pro1=Integer.MAX_VALUE;
        // for(int i=0;i<nums.length;i++){
        //     for(int j=i+1;j<nums.length;j++){
        //         pro=nums[i]*nums[j];
        //     }
        // }
        // return pro;
        Arrays.sort(nums);
        int n=nums.length;
        return Math.max(nums[n - 1] * nums[n - 2] * nums[n - 3],nums[0] * nums[1] * nums[n - 1]);
    }
}
