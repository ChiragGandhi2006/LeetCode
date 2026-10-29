class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        int m=index.size();

        vector<int> target;
        for(int i=0;i<n;i++){
            target.push_back(0);
            for(int j=target.size()-1;j>index[i];j--){
                target[j]=target[j-1];
            }
            target[index[i]]=nums[i];
        }
        return target;
    }
};