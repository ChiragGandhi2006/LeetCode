class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                a++;
            }
            else if(nums[i]>0){
                b++;
            }
        }
        return max(a,b);
    }
};