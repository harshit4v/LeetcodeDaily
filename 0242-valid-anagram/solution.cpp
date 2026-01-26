class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>s1(26,0),s2(26,0);
        if(s.size()!=t.size())return false;
        for(char i : s){
            s1[i-'a']++;
        }
        for(char i : t){
            s2[i-'a']++;
        }
        for(int i=0;i<26;i++){
            if(s1[i]!=s2[i]){
                return false;
            }
        }
        return true;
    }
};
