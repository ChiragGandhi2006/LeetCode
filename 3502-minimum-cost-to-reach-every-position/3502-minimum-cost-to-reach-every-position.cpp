class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> ans;
        int a=cost[0];
        for(int i=0;i<cost.size();i++){
            a=min(a,cost[i]);
            ans.push_back(a);
        }
        return ans;

        
    }
};