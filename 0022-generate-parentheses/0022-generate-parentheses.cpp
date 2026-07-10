class Solution {
public:
   void func(int ind,string s ,int open,int close,vector<string>&res,int n){
        if(ind==2*n && open ==close){
            res.push_back(s);
            return;
        }
        if(open<n){
            func(ind+1,s+'(',open+1,close,res,n);
        }
        if(close<open){
            func(ind+1,s+')',open,close+1,res,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        //your code goes here
        vector<string>res;
        int ind=0;
        func(ind,"",0,0,res,n);
        return res;
    }
};