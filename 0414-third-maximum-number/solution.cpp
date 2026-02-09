class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // long long first = LLONG_MIN;
        // long long second = LLONG_MIN;
        // long long third = LLONG_MIN;
        // for(int x : nums) {
        //     if(x == first || x == second || x == third)
        //         continue;
        //     if(x > first) {
        //         third = second;
        //         second = first;
        //         first = x;
        //     }
        //     else if(x > second) {
        //         third = second;
        //         second = x;
        //     }
        //     else if(x > third) {
        //         third = x;
        //     }
        // }
        // if(third == LLONG_MIN)
        //     return (int)first;
        // return (int)third;
        set<int>st(nums.begin(),nums.end());
        if(st.size()<3){
            return *st.rbegin();
        }
        return *(++++st.rbegin());
    }
};
