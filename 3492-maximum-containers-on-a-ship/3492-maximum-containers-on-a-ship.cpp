class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int a=n*n;
        int b=maxWeight/w;
        int ans=min(a,b);
        return ans;
        
    }
};