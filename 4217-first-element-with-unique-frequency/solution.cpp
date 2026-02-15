class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int x:nums){
            mpp[x]++;
        }
        unordered_map<int,int>freq;
        for(auto &i:mpp){
            freq[i.second]++;
        }
        for(int x:nums){
            int ele=mpp[x];
            if(freq[ele]==1){
                return x;
            }
        }
        return -1;
    }
};
