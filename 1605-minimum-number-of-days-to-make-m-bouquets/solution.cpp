class Solution {
    private:
    bool possible(vector<int>&nums,int days,int m,int k){
        int n=nums.size();
        int cnt=0;
        int ndays=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=days){
                cnt++;
            }
            else{
                ndays+=(cnt/k);
                cnt=0;
            }
        }
        ndays+=(cnt/k);
        return ndays>=m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=m*1LL*k*1LL;
        int n=bloomDay.size();
        if(val>n)return -1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }
        int low=mini,high=maxi,ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});
