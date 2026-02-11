class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int>ans;
        unordered_map<int,int>mpp;
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            int curr=nums2[i];
            while(!st.empty() && st.top()<=curr){
                st.pop();
            }
            if(st.empty()){
                mpp[curr]=-1;
                // ans[i]=-1;
            }
            else{
                mpp[curr]=st.top();
                // ans[i]=st.top();
            }
            st.push(curr);
        }
         for(int i = 0; i < nums1.size(); i++) {
            ans.push_back(mpp[nums1[i]]);
        }
        return ans;
    }
};
