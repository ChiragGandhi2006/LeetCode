class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long ans=LLONG_MAX;
        for(int i=0;i<nums.size()-1;i++){
            long long diff= (long long)nums[i+1]-nums[i];
            ans=min(ans,diff);
        }
        return ans;
        
    }
};