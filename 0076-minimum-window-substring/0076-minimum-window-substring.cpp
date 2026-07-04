class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0;
        int minlen=INT_MAX,sInd=-1;
        int cnt=0;
        int hash[256]={0};
        for(char c:t){
            hash[c]++;
        }
        while(r<s.size()){
            if(hash[s[r]]>0){
                cnt++;
            }
            hash[s[r]]--;
            while(cnt==t.size()){
                if((r-l+1)<minlen){
                    minlen=r-l+1;
                    sInd=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return (sInd==-1)?"":s.substr(sInd,minlen);
    }
};