class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        vector<int> ans;
        // int n = nums.size();
        // int expected = 1;
        // for (int i = 0; i < n; i++) {
        //     while (expected < nums[i]) {
        //         ans.push_back(expected);
        //         expected++;
        //     }
        //     if (nums[i] == expected)
        //         expected++;
        // }
        // while (expected <= n) {
        //     ans.push_back(expected);
        //     expected++;
        // }
        // return ans;

        unordered_map<int,int>hash(0);
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(hash.find(i)==hash.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
