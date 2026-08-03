class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        int n = expression.size();
        vector<int>ans;
        for (int i = 0; i < n; i++) {
            char ch = expression[i];
            if (ch == '+' || ch == '-' || ch == '*') {
                string left = expression.substr(0, i);
                string right = expression.substr(i + 1);
                vector<int> leftans = diffWaysToCompute(left);
                vector<int> rightans = diffWaysToCompute(right);
                for (int a : leftans) {
                    for (int b : rightans) {
                        if(ch=='+'){
                            ans.push_back(a+b);
                        }else if(ch=='-'){
                            ans.push_back(a-b);
                        }else{
                            ans.push_back(a*b);
                        }
                    }
                }
            }
        }
        if(ans.size()==0){
            ans.push_back(stoi(expression));
        }
        return ans;
    }
};