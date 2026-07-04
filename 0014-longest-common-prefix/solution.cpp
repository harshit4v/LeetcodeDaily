class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string start=strs[0],end=strs.back();
        string ans="";
        for(int i=0;i<min(start.size(),end.size());i++){
            if(start[i]==end[i]){
                ans+=start[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};
