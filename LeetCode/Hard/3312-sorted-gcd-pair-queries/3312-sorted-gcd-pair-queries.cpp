class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int n=nums.size();
        int maxval=*max_element(nums.begin(),nums.end());
        vector<int>divisorfreq(maxval+1,0);
        for(int i=0;i<n;i++){
            int num=nums[i];
            for(int j=1;j*j<=num;j++){
                if(num%j==0){
                    divisorfreq[j]++;
                    if(num/j !=j){
                    divisorfreq[num/j]++;
                }
                }//num/j
            }
        }
        vector<long long>pairswithgcd(maxval+1,0);
        for(int g=maxval;g>=1;g--){
            long long count=divisorfreq[g];
            //nC2
            pairswithgcd[g]=count*(count-1)/2;

            //correction time
            for(int mult=2*g;mult<=maxval;mult+=g){
                pairswithgcd[g]-=pairswithgcd[mult];
            }
        }
        vector<long long>prefixCountGcd(maxval+1,0);
        for(int g=1;g<=maxval;g++){
            prefixCountGcd[g]=prefixCountGcd[g-1]+pairswithgcd[g];
        }
        vector<int>result;
        //binarysearch
        for(long long idx:queries){
            int l=1;
            int r=maxval;
            int temp=1;
            while(l<=r){
                int mid_gcd=l+(r-l)/2;
                if(prefixCountGcd[mid_gcd]>idx){
                    temp=mid_gcd;
                    r=mid_gcd-1;
                }
                else{
                    l=mid_gcd+1;
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};