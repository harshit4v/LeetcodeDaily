class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,ind=0;
        while(i<nums1.size() && j<nums2.size()){
            int low=i,high=nums2.size()-1;
            while(low<=high){
            int mid=low+(high-low)/2;
            if(nums2[mid]>=nums1[i]){
                ind=max(ind,mid-i);
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            }
            i++;
            j++;
        }
        return ind;
    }
};