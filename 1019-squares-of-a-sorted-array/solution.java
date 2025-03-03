class Solution {
    public int[] sortedSquares(int[] nums) {
        Arrays.sort(nums);
        int k=0;
        int temp[]=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            temp[i]=(int)Math.pow(nums[i],2);
        }
        Arrays.sort(temp);
        return temp;
        
    }
}
