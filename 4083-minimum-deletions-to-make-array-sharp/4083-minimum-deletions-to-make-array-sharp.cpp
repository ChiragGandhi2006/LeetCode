class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return 0;
        }
        int a=1;
        int b=nums[0];
        for(int i=1;i<n;i++){
            if((nums[i]^b)!=0){
                a++;
                b=nums[i];
            }
        }
        return n-a;
    }
};