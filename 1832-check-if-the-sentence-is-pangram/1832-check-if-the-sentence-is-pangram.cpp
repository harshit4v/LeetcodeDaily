class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>freq(26,0);
        for(char i:s){
            freq[i-'a']++;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]==0){
                return false;
                break;
            }
        }
        return true;
    }
};