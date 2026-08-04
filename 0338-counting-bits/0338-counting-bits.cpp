class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for (int i = 0; i <= n; i++) {
        int cnt = 0;
            int nums = i;
            while (nums != 0) {
                int d = nums % 2;
                if (d == 1) {
                    cnt++;
                }
                nums /= 2;
            }
            res.push_back(cnt);
        }
        return res;
    }
};