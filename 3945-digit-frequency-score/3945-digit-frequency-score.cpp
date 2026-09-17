class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> freq;
        while(n>0){
            int d=n%10;
            freq[d]++;
            n=n/10;

        }
        int sum=0;

        for(auto x:freq){
            sum+=x.first*x.second;
        }
        return sum;
        
    }
};