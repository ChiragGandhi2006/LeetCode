class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int maxi = nums[nums.size()-1];
        int count = 0;

        for(int i = 0; i < nums.size()-1; i++){
            count += maxi - nums[i];
        }

        return count;
    }
};