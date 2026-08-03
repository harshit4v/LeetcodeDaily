class Solution {
public:
    int n;
    vector<int>dp;
    int solve(vector<int>&stone,int i){
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int result=stone[i]-solve(stone,i+1);
        if(i+1<n){
            result=max(result,stone[i]+stone[i+1]-solve(stone,i+2));
        }
        if(i+2<n){
            result=max(result,stone[i]+stone[i+1]+stone[i+2]-solve(stone,i+3));
        }
        return dp[i]=result;
    }
    string stoneGameIII(vector<int>& stone) {
        n=stone.size();
        dp.resize(n+1,-1);
        int diff=solve(stone,0);
        if(diff>0){
            return "Alice";
        }else if(diff<0){
            return "Bob";
        }else{
            return "Tie";
        }
    }
};