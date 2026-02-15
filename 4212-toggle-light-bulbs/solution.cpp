class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<bool>arr(101,false);
        for(int i=0;i<bulbs.size();i++){
            arr[bulbs[i]]=!arr[bulbs[i]];
        }
        vector<int>res;
        for(int i=1;i<=100;i++){
            if(arr[i]){
                res.push_back(i);
            }
        }
        return res;
    }
};
