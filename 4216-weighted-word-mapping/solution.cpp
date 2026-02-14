class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result;
        for(auto word: words){
            long long sum=0;
            for(auto c: word){
                sum+=weights[c-'a'];
            }
            int val=sum%26;
            char ans='z'-val;
            result.push_back(ans);
        }
        return result;
    }
};
