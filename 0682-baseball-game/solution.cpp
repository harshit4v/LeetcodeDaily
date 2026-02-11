class Solution {
public:
    int calPoints(vector<string>& str) {
        stack<int> st;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == "C"){
                if(!st.empty())
                    st.pop();
            }
            else if(str[i] == "D"){
                st.push(2 * st.top());
            }
            else if(str[i] == "+"){
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.push(top1);
                st.push(top1 + top2);
            }
            else{
                st.push(stoi(str[i]));
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
