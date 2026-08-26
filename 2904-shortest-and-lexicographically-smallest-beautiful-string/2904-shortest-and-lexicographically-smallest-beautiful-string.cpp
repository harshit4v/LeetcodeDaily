class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l = 0, n = s.length(), cnt = 0;
        string str = "";
        int bestLen = INT_MAX;
        int bestL = 0;
        for (int right = 0; right < n; right++) {
            if (s[right] == '1') {
                cnt++;
            }
            while (cnt == k) {
                int len = right - l + 1;
                if (len < bestLen) {
                    bestLen = len;
                    bestL = l;
                }else if (len == bestLen) {
                    if (s.compare(l, len, s, bestL, bestLen) < 0) {
                        bestL = l;
                    }
                }
                if (s[l] == '1') {
                    cnt--;
                }
                l++;
            }
        }
        if (bestLen == INT_MAX) {
            return "";
        }
        return s.substr(bestL, bestLen);
    }
};