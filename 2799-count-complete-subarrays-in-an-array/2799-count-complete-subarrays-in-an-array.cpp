class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int cnt = 0;
        set<int> st;
        for (int i : nums) {
            st.insert(i);
        }
        int dis = st.size();
        int i = 0;
        unordered_map<int, int> mpp;
        for (int j = 0; j < nums.size(); j++) {
            mpp[nums[j]]++;
                while (mpp.size() == dis) {
                    cnt += nums.size() - j;
                    mpp[nums[i]]--;
                if(mpp[nums[i]]==0){
                    mpp.erase(nums[i]);
                }
                i++;
            }
        }
        return cnt;
    }
};