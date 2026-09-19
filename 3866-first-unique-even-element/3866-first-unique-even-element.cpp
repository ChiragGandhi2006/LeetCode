class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }

        for(int i:nums){
            if(freq[i]==1 && i%2==0){
                return i;
            }
        }
        return -1;

    }
};