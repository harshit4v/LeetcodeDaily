class Solution {
public:
int countWords(string s){
    int cnt=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            cnt++;
        }
    }
    return cnt;
}
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
        for(int i=0;i<sentences.size();i++){
            int val=countWords(sentences[i]);
            maxi=max(maxi,val);
        }
        return maxi;
    }
};
