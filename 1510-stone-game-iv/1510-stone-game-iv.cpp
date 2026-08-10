class Solution {
public:
    vector<int> dp = vector<int>(100001, -1);
    bool winnerSquareGame(int n) {
        if(n==0){
            return false;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        for(int i=1;i*i<=n;i++){
            if(winnerSquareGame(n-i*i)==false){
                return dp[n]=true;
            }
        }
        return dp[n]=false;
    }
};