class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n));
        int top=0,left=0;
        int right=n-1,bottom=n-1,val=1;
            while(top<=bottom && left<=right){
                for(int i=left;i<=right;i++){
                    res[top][i]=val++;
                }
                top++;
                for(int i=top;i<=bottom;i++){
                    res[i][right]=val++;
                }
                right--;
                if(top<=bottom){
                    for(int i=right;i>=left;i--){
                        res[bottom][i]=val++;
                    }
                    bottom--;
                }
                if(left<=right){
                    for(int i=bottom;i>=top;i--){
                        res[i][left]=val++;
                    }
                    left++;
                }
            }
        return res;
    }
};
