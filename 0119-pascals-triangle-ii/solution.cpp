class Solution {
public:
    vector<int> getRow(int row) {
        // long long sum=1;
        // vector<int>ans;
        // ans.push_back(1);
        // for(int i=1;i<rowIndex;i++){
        //     sum=sum*(rowIndex-i);
        //     sum=sum/i;
        //     ans.push_back(sum);
        // }
        // return ans;
        long long ans=1;
        vector<int>ansRow;
        ansRow.push_back(1);
        for(int col=1;col<=row;col++){
            ans*=(row-col)+1;
            ans=ans/col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
};
