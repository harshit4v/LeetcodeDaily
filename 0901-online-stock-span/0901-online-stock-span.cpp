class StockSpanner {
public:
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int prices) {
        int span=1;
        while(!st.empty() && st.top().first<=prices){
            span+=st.top().second;
            st.pop();
        }
        st.push({prices,span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */