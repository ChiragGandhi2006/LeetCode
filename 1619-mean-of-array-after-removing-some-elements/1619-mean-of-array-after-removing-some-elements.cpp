class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size();
        double ans=0.0;
        double sum=0.0;
        int k=n/20;
        sort(arr.begin(),arr.end());
        for(int i=k;i<n-k;i++){
            sum+=arr[i];
        }
        ans=sum/(n-2*k);
        return ans;
        
    }
};