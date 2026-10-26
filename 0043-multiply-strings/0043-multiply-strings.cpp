class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();

        if (num1 == "0" || num2 == "0") {
            return "0";
        }

        vector<int> ans(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int a = num1[i] - '0';
                int b = num2[j] - '0';

                int product = a * b;
                int sum = product + ans[i + j + 1];

                ans[i + j + 1] = sum % 10;
                ans[i + j] += sum / 10;
            }
        }

        string s = "";

        for (int i = 0; i < ans.size(); i++) {
            if (i == 0 && ans[i] == 0) {
                continue;
            }
            s += ans[i] + '0';
        }

        return s;
    }
};