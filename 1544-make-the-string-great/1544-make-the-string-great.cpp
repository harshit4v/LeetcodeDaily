class Solution {
public:
    string makeGood(string s) {
        string ans="";
        int n=s.size();
        for(char&ch:s){
            if(!ans.empty() && (ans.back()+32==ch || ans.back()-32==ch)){
                ans.pop_back();
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};