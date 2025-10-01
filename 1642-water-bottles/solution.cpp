class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int cnt=0,drank=numBottles,empty=numBottles;
        while(empty>=numExchange){
            int newB=empty/numExchange;
            drank+=newB;
            empty=(empty%numExchange)+newB;
        }
        return drank;
    }
};
