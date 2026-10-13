class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> square;
        for(int i:nums){
            square.push_back(i*i);
        }

        sort(square.begin(),square.end());

        long long score=0;
        int n=square.size();
        for(int i=0;i<n;i++){
            if(i<n/2){
                score-=square[i];
            }
            else{
                score+=square[i];
            }
        }
        return score;
        
    }
};