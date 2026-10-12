class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans{-1,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((i!=j)&&(nums[i]>nums[j])&&(nums[i]+nums[j]==target)){
                    if(ans[0]==-1){
                        ans={i,j};
                    }
                    else if((nums[i]*nums[j])>(nums[ans[0]]*nums[ans[1]])){
                        ans={i,j};
                    }
                }
            }
        }
        return ans;
    }
};