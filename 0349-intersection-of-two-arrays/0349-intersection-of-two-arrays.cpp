class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> result;
        int n = nums1.size();
        int n1 = nums2.size();
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n1; j++) {
                if(nums1[i] == nums2[j]) {
                    result.insert(nums1[i]);
                    break;
                }
            }
        }
        
        return vector<int>(result.begin(), result.end());
    }
};