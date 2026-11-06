class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        int total= 1 << n;

        for(int i=0;i<total;i++){
            int num= i^(i>>1);
            ans.push_back(num);
        }
        return ans;
        
    }
};