class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }

        vector<char> v;

        
        for (auto it : freq) {
            v.push_back(it.first);
        }

        
        sort(v.begin(), v.end(), [&](char a, char b) {
            return freq[a] > freq[b];
        });

        string ans = "";

        
        for (int i = 0; i < v.size(); i++) {
            ans += string(freq[v[i]], v[i]);
        }

        return ans;
    }
};