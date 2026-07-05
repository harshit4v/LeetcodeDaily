class Solution {
public:
    bool possible(vector<int>&bloomday,int m,int k,int day){
        int flower=0,bouquet=0;
        for(int i=0;i<bloomday.size();i++){
            if(bloomday[i]<=day){
                flower++;
            }
            else{
                flower=0;
            }
            if(flower==k){
                bouquet++;
                flower=0;
            }
        }
        return bouquet>=m;
    }
    int minDays(vector<int>& bloomday, int m, int k) {
        int mini=*min_element(bloomday.begin(),bloomday.end());
        int maxi=*max_element(bloomday.begin(),bloomday.end());
        int low=mini,high=maxi;
        long long need=1LL*m*k;
        if(need>bloomday.size()){
            return -1;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomday,m,k,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
