class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        int a;
        int b;
        int c;
        if(n<3){
            ans=0;
        }
        for(int i=0;i<n;i++){
            a=nums[n-1]-nums[2];
            b=nums[n-2]-nums[1];
            c=nums[n-3]-nums[0];
            ans=min(a,min(b,c));
        }
        return ans;
    }
};