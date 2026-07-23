class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n=temperatures.size(),k=0;
        vector<int> ans(n,0);
        for (int i = 0; i < temperatures.size(); i++) {
            while (!st.empty() && temperatures[st.top()] < temperatures[i] ) {
                    int prevind=st.top();
                    ans[prevind] =i-prevind;
                    st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};