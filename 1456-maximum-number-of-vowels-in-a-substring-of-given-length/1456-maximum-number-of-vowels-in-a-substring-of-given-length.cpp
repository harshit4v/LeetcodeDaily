class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            return true;
        }else{
            return false;
        }
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        int i=0,j=0;
        int maxv=0;
        int cnt=0;
        while(j<n){
            if(isVowel(s[j])){
                cnt++;
            }
            if(j-i+1==k){
                maxv=max(maxv,cnt);
                if(isVowel(s[i])){
                    cnt--;
                }
                i++;
            }
            j++;
        }
        return maxv;
    }
};