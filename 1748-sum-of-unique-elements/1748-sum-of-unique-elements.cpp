class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> freq;
        int sum=0;

        for(int i:nums){
            freq[i]++;
        }

        for(int i:nums){
            if(freq[i]==1){
                sum+=i;
            }

        }
        return sum;
        
    }
};