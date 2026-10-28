class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> count;
        for(int num:nums){
            count[num]++;
        }

        vector<int> ans;
        ans.push_back(0);
        ans.push_back(0);
        for(auto i:count){
            if(i.second>=2){
                ans[0]+=i.second/2;
            }
            if(i.second%2!=0){
                ans[1]+=1;
            }
        }

        return ans;
        
    }
};