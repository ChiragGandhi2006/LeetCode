class Solution {
public:
    int calculateScore(int a, int b) {
        int ans;
        int c=popcount(static_cast<unsigned int>(a));
        int d=popcount(static_cast<unsigned int>(b));

        if(c>=d){
            ans=c*d;
        }
        else{
            ans=d/c;
        }
        return ans;
    }
};