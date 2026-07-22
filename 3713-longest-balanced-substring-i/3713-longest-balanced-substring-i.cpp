class Solution {
public:
    bool checkbalance(vector<int>& freq) {
        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) {
                continue;
            }
            if (cnt == 0) {
                cnt = freq[i];
            } else if (cnt != freq[i]) {
                return false;
            }
        }
            return true;
    }
    int longestBalanced(string s) {
        int n = s.size(), maxlen = 0;
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;
                if (checkbalance(freq)) {
                    maxlen = max(maxlen, j - i + 1);
                }
            }
        }
        return maxlen;
    }
};