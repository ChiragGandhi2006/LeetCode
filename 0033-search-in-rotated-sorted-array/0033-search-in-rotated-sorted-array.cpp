class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int str=0;
        int end=n-1;
        while(str<=end){
            int mid= (str+end)/2;
            if(target==nums[mid]){
                cout<<"Target found at index:"<<mid;
                return mid;
            }
            if(nums[str]<=nums[mid]){
                if(nums[str]<=target&& target<=nums[mid]){
                    end=mid-1;
                }
                else{
                    str=mid+1;
                }
            }
            else{
                if(nums[mid]<=target && target<=nums[end]){
                    str=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        cout<<"Not found";
        return -1;
    }
};