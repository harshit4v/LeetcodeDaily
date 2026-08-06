class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>res;
        for(int i=0;i<nums.size();i++){
            int start=i,end=i;
            while(i+1<nums.size() && (long long)nums[i+1]-nums[i]==1){
                end++;
                i++;
            }
            if(start==end){
            res.push_back(to_string(nums[end]));
            }else{
                res.push_back(to_string(nums[start])+"->"+to_string(nums[end]));
            }
        }
        return res;
    }
};