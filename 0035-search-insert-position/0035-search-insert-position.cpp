class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int str=0;
        int end=n-1;
        for(int i=0;i<n;i++){
            int mid=(str+end)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                str=mid+1;
            }
            else{
                end=mid-1;
            }

        }
        return str;
       
    }
};