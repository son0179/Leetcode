class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int startindex = -1;
        int totalcost = 0;
        int i;
        
        for (i = 0 ;i< gas.size() * 2 ; i++){
            
            if(startindex == i%gas.size()) return startindex;
            totalcost += gas[i%gas.size()] - cost[i%gas.size()];
            if( totalcost < 0){
                startindex=-1;
                totalcost = 0;
            }
            else{
                if(startindex == -1) startindex = i%gas.size();
            }
            
        }
        return -1;
    }
};