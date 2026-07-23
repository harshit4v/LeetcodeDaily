class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt=0,cnt2=0;
        for(int i=0;i<word.size();i++){
            if(isupper(word[i])){
                cnt++;
            }else{
                cnt2++;
            }
        }
        if(cnt==word.size()){
            return true;
        }
        if(cnt==1 && isupper(word[0])){
            return true;
        }
        if(cnt2==word.size()){
            return true;
        }
        return false;
    }
};