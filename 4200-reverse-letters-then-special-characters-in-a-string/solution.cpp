class Solution {
public:
    string reverseByType(string s) {
       int i=0;
        int j=s.size()-1;
        while(i<j){
            if(!isalpha(s[i]) && isalpha(s[j])){
                j--;
                continue;
            }
            else if(isalpha(s[i]) && !isalpha(s[j])){
                i++;
                continue;
            }
            else if(isalpha(s[i]) && isalpha(s[j])){
                i++;
                j--;
                continue; 
            }
            swap(s[i++],s[j--]);
        }
        i=0;
        j=s.size()-1;
        while(i<j){
            if(!isalpha(s[i]) && isalpha(s[j])){
                i++;
                continue;
            }
            else if(isalpha(s[i]) && !isalpha(s[j])){
                j--;
                continue;
            }
            else if(!isalpha(s[i]) && !isalpha(s[j])){
                i++;
                j--;
                continue; 
            }
            swap(s[i++],s[j--]);
        }
        return s;
    }
};
