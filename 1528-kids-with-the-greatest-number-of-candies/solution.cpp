class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>res;
        int maxi=candies[0];
        // vector<int>v=candies;
        for(int i=0;i<candies.size();i++){
            maxi=max(maxi,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            candies[i]+=extraCandies;
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]>=maxi){
                res.push_back(true);
            }
            else{
            res.push_back(false);
            }
        }
        return res;
    }
};
