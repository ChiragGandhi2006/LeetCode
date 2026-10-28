class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int ans = 0;
        int mask = 0;

        for (int i = 30; i >= 0; i--) {
            mask |= (1 << i);

            unordered_set<int> s;

            for (int num : nums) {
                s.insert(num & mask);
            }

            int temp = ans | (1 << i);

            for (int num : nums) {
                int prefix = num & mask;

                if (s.count(temp ^ prefix)) {
                    ans = temp;
                    break;
                }
            }
        }

        return ans;
    }
};