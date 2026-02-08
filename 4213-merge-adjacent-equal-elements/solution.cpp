class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long>result;
        for(int x:nums){
            long long curr=x;
            while(!result.empty()&&result.back()==curr){
                curr+=result.back();
                result.pop_back();
            }
            result.push_back(curr);
        }
        return result;;
    }
};
