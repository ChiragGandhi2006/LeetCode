
class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> st;

        int i = 0;

        while (i < word.length()) {
            
            if (word[i] < '0' || word[i] > '9') {
                i++;
                continue;
            }

            string num = "";

            
            while (i < word.length() &&
                   word[i] >= '0' && word[i] <= '9') {
                num += word[i];
                i++;
            }

            
            int j = 0;

            while (j < num.length() - 1 && num[j] == '0') {
                j++;
            }

            num = num.substr(j);

            
            st.insert(num);
        }

        return st.size();
    }
};
