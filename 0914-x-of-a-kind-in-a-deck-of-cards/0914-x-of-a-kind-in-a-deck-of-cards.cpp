class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> freq;
        for(int i:deck){
            freq[i]++;
        }

        int g=0;
        for(auto it:freq){
            g=gcd(g,it.second);
        }
        
        return g>=2;
    }
};