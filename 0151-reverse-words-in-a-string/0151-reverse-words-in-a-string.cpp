
class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;

        while (i >= 0) {
            
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            if (i < 0) break;

            
            int j = i;

            while (i >= 0 && s[i] != ' ') {
                i--;
            }

            
            if (ans != "") {
                ans += " ";
            }

            
            for (int k = i + 1; k <= j; k++) {
                ans += s[k];
            }
        }

        return ans;
    }
};
