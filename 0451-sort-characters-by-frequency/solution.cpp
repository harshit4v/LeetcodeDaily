class Solution {
public:
    string frequencySort(string s) {
        vector<int>hash(256,0);
        for(char i:s){
            hash[i]++;
        }
        vector<pair<int,char>>res;
        for(int i=0;i<hash.size();i++){
            if(hash[i]>0){
                res.push_back({hash[i],char(i)});
            }
        }
        // vector<char>temp;
        sort(res.begin(),res.end(),greater<>());
        string str="";
        for(auto i : res){
            str.append(i.first,i.second);
        }
        return str;
    }
};
