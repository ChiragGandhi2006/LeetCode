class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int> freq;
        vector<int> ans;

        for(int i:nums){
            freq[i]++;
            
       }
       for(int i=1;i<=n;i++){
        if(freq[i]==2){
            ans.push_back(i);
        }
       }

       for(int i=1;i<=n;i++){
        if(freq[i]==0){
            ans.push_back(i);
        }
       }

        return ans;
        
    }
};