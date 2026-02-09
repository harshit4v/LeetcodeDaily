class Solution {
public:
    bool ismatched(char open,char close){
    if((open =='('  &&  close ==')')||
       (open == '[' && close == ']')||
       (open == '{' && close == '}'))return true;
    else return false;
    }
    bool isValid(string s) {
        stack<int>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.empty())return false;
                char ch=st.top();
                st.pop();
                if(!ismatched(ch,s[i]))return false;
            }
        }
        return st.empty();
    }
};
