class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int small = *min_element(nums.begin(), nums.end());
        set<int> st;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        for(int i = small; i <= maxi; i++) {
            if(st.find(i) == st.end()) {
                res.push_back(i);
            }
        }
        return res;
    }
};