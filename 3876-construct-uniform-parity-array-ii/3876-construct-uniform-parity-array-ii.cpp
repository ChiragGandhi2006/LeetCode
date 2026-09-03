class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int smallodd=INT_MAX;

        for(int i:nums1){
            if(i%2!=0){
                smallodd=min(smallodd,i);
            }
        }

        if(smallodd==INT_MAX){
            return true;
        }

        for(int i:nums1){
            if(i%2==0 && i<smallodd){
                return false;
            }
        }

        return true;

        
    }
};