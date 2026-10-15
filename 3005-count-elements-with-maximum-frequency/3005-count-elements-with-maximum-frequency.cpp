class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101]={0};
        int maxfreq=0;

        for(int i:nums){
            freq[i]++;
            maxfreq=max(maxfreq,freq[i]);
        }
        int total=0;
        for(int i=0;i<=100;i++){
            if(freq[i]==maxfreq){
                total+=freq[i];
            }
        }
        return total;
    }
};