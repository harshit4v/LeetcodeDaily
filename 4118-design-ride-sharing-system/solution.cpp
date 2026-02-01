class RideSharingSystem {
    private:
    queue<int>rd;
    queue<int>dr;
    unordered_set<int>st;
public:
    RideSharingSystem() {
    }
    
    void addRider(int riderId) {
        rd.push(riderId);
        st.insert(riderId);
    }
    
    void addDriver(int driverId) {
        dr.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        while(!rd.empty() && st.find(rd.front())==st.end()){
            rd.pop();
        }
        if(rd.empty() || dr.empty()){
            return{-1,-1};
        }
        int driverId=dr.front();
        dr.pop();
        int riderId=rd.front();
        rd.pop();
        st.erase(riderId);
        vector<int>ans={driverId,riderId};
        return ans;
    }
    
    void cancelRider(int riderId) {
        st.erase(riderId);
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */
