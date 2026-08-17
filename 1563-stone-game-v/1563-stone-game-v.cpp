class Solution {
public:
    int dp[501][501];
    int solve(int l,int r,vector<int>&cumsum){
        if(l>=r){
            return 0;
        }
        if(dp[l][r]!=-1){
            return dp[l][r];
        }
        int score=0;
        for(int mid=l;mid<r;mid++){
            int leftsum=cumsum[mid]-(l-1>=0?cumsum[l-1]:0);
            int rightsum=cumsum[r]-cumsum[mid];
            if(leftsum<rightsum){
                score=max(score,leftsum+solve(l,mid,cumsum));
            }else if(leftsum>rightsum){
                score=max(score,rightsum+solve(mid+1,r,cumsum));
            }else{
                score=max({score,leftsum+solve(l,mid,cumsum),rightsum+solve(mid+1,r,cumsum)});
            }
        }
        return dp[l][r]=score;
    }
    int stoneGameV(vector<int>& stoneValue) {
        int n=stoneValue.size();
        vector<int>cumsum(n,0);
        cumsum[0]=stoneValue[0];
        for(int i=1;i<n;i++){
            cumsum[i]=cumsum[i-1]+stoneValue[i];
        }
        memset(dp, -1, sizeof(dp));
        return solve(0,n-1,cumsum);
    }
};