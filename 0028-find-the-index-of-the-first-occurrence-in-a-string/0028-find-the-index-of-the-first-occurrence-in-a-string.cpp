class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos= haystack.find(needle);
        if(pos==string::npos){ //string::npos means string not found 
            return -1;
        }else{
            return pos;
        }
    }
};