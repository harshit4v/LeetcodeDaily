class Solution {
public:
    int countAsterisks(string s) {
        int cnt=0;
        bool inside=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='|'){
                inside=!inside;
            }
            else if(s[i]=='*' && !inside){
                cnt++;
            }
        }
        return cnt;
    }
};
