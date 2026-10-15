class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int freq[101]={0};
        for(int i:nums){
            freq[i]++;

            if(freq[i]>2){
                return false;
            }
        }
        return true;
        
    }
};