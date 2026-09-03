class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i:nums){
            int digit=0;
            while(i>0){
                digit++;
                i=i/10;
            }
            if(digit%2==0){
                count++;
            }

            
        }
        return count;
        
    }
};