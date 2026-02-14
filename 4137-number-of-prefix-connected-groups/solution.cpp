class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int>pre;
        for(string word: words){
            if((int)word.size()>=k){
                pre[word.substr(0,k)]++;
            }
        }
        int cnt=0;
        for(auto &i:pre){
            if(i.second>=2)cnt++;
        }
        return cnt;
    }
};
