class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int del_cnt=0;
        int m=strs.size();
        int n=strs[0].size();
        for(int col=0;col<n;col++){
            for(int row=0;row<m-1;row++){
                if(strs[row][col]>strs[row+1][col]){
                    del_cnt++;
                    break;
                }
            }
        }
        return del_cnt;
    }
};