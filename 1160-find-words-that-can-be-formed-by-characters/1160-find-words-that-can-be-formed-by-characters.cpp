class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int>charcnt(26,0);
        for(char &ch:chars){
            charcnt[ch-'a']++;
        }
        int result=0;
        for(string &word:words){
            vector<int>wordcnt(26,0);
            for(char &ch:word){
                wordcnt[ch-'a']++;
            }
            bool ok=true;
            for(int i=0;i<26;i++){
                if(wordcnt[i]>charcnt[i]){
                    ok=false;
                    break;
                }
            }
            if(ok==true){
                result+=word.length();
            }
        }
        return result;
    }
};