class Solution {
public:
    bool doesAliceWin(string s) {
        int cnt_vowel=0;
        for(char i:s){
            if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
                cnt_vowel++;
            }
        }
        if(cnt_vowel==0){
            return false;
        }else{
            return true;
        }
    }
};