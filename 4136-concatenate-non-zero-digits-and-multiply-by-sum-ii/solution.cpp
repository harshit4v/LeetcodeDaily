class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        // const int MOD = 1000000007;
        // int n=s.size();
        // vector<long long>numtilln(n);
        // vector<long long>sumtilln(n);
        // vector<long long>cnttilln(n);
        // long long num=0,sum=0;
        // int cnt=0;
        // vector<long long> power10(n + 1);
        // power10[0] = 1;
        // for (int i = 1; i <= n; i++){
        //     power10[i] = (power10[i - 1] * 10) % MOD;
        // }
        // for(int i=0;i<n;i++){
        //     if(s[i]!='0'){
        //         int d=s[i]-'0';
        //         num=(num*10+d)%MOD;
        //         sum+=d;
        //         cnt++;
        //     }
        //     numtilln[i]=num;
        //     sumtilln[i]=sum;
        //     cnttilln[i]=cnt;
        // }
        // vector<int>ans;
        // for(int i=0;i<queries.size();i++){
        //     int l=queries[i][0];
        //     int r=queries[i][1];
        //     long long number=0,digitsum=0;
        //     int digitcnt=0;
        //     if(l==0){
        //         digitsum=sumtilln[r];
        //         digitcnt=cnttilln[r];
        //         number=numtilln[r];
        //     }
        //     else{
        //         digitsum=sumtilln[r]-sumtilln[l-1];
        //         digitcnt=cnttilln[r]-cnttilln[l-1];
        //         number=numtilln[r]-(1LL*(numtilln[l-1]*power10[digitcnt])%MOD+MOD)%MOD;
        //     }
        //     ans.push_back((number*(digitsum%MOD))%MOD);
        // }
        // return ans;

        const int MOD = 1000000007;

        vector<int> pos;
        vector<int> digit;

        // Store all non-zero digits
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                pos.push_back(i);
                digit.push_back(s[i] - '0');
            }
        }

        int k = digit.size();

        vector<long long> power(k + 1);
        power[0] = 1;
        for (int i = 1; i <= k; i++)
            power[i] = (power[i - 1] * 10) % MOD;

        vector<long long> prefNum(k + 1, 0);
        vector<long long> prefSum(k + 1, 0);

        for (int i = 1; i <= k; i++) {
            prefNum[i] = (prefNum[i - 1] * 10 + digit[i - 1]) % MOD;
            prefSum[i] = prefSum[i - 1] + digit[i - 1];
        }

        vector<int> ans;

        for (int i = 0; i < queries.size(); i++) {

            int l = queries[i][0];
            int r = queries[i][1];

            int left = lower_bound(pos.begin(), pos.end(), l) - pos.begin();
            int right = upper_bound(pos.begin(), pos.end(), r) - pos.begin() - 1;

            if (left > right) {
                ans.push_back(0);
                continue;
            }

            int len = right - left + 1;

            long long number =
                (prefNum[right + 1] -
                 (prefNum[left] * power[len]) % MOD + MOD) % MOD;

            long long sum = prefSum[right + 1] - prefSum[left];

            ans.push_back((number * (sum % MOD)) % MOD);
        }

        return ans;
    }
};
