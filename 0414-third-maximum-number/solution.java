class Solution {
    public int thirdMax(int[] nums) {
        // int flargest=Integer.MIN_VALUE;
        // int slargest=Integer.MIN_VALUE;
        // int tlargest=Integer.MIN_VALUE;
        // for(int i=0;i<nums.length;i++){
        //     if(nums[i]>flargest){
        //         flargest=nums[i];
        //     }
        // }
        // for(int i=0;i<nums.length;i++){
        //     if(nums[i]>slargest && nums[i]<flargest){
        //         slargest =nums[i];
        //     }
        // }
        // for(int i=0;i<nums.length;i++){
        //     if(nums[i]>tlargest && nums[i]<flargest && nums[i]<slargest ){
        //         tlargest =nums[i];
        //     }
        // }
        // if (tlargest == Integer.MIN_VALUE) {
        //     return (slargest == Integer.MIN_VALUE) ? flargest : slargest;
        // }

        // return tlargest;
        long flargest = Long.MIN_VALUE;
        long slargest = Long.MIN_VALUE;
        long tlargest = Long.MIN_VALUE;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > flargest) {
                tlargest = slargest;
                slargest = flargest;
                flargest = nums[i];
            } else if (nums[i] > slargest && nums[i] < flargest) {
                tlargest = slargest;
                slargest = nums[i];
            } else if (nums[i] > tlargest && nums[i] < slargest) {
                tlargest = nums[i];
            }
        }

        // If third largest doesn't exist, return the largest
        return (tlargest == Long.MIN_VALUE) ? (int) flargest : (int) tlargest;
    }
}
