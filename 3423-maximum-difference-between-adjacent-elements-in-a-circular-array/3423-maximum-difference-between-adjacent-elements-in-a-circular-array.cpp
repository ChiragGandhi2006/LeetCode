class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        if (nums.size() <= 1) return 0;
        
        int maxi = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
           
            int diff = abs(nums[i] - nums[(i + 1) % n]);
            maxi = max(maxi, diff);
        }
        
        return maxi;
    }
};