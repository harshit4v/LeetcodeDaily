class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n=nums.size();
        // vector<pair<int,int>>ind;
        // for(int i=0;i<n;i++){
        //     ind.push_back({nums[i],i});
        // }
        // sort(ind.begin(),ind.end());
        // int i=0,j=n-1;
        // while(i<j){
        //     int sum=ind[i].first+ind[j].first;
        //     if(sum==target){
        //         return {ind[i].second,ind[j].second};
        //     }
        //     else if(sum<target){
        //         i++;
        //     }
        //     else{
        //         j--;
        //     }
        // }
        // return {-1,-1};
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int need=target-nums[i];
            if(mpp.find(need) != mpp.end()){
                return{mpp[need],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
};
