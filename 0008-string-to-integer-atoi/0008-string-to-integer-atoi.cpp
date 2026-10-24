class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign=1;
        long long num=0;

        while(i<s.length() && s[i]==' '){
            i++;
        }
        if(i<s.length() && s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(i<s.length() && s[i]=='+'){
            i++;
        }

        while(i<s.length() && s[i]>='0' && s[i]<='9'){
            num=num*10 +(s[i]-'0');

            if(num> 2147483647LL){
                if (sign == -1)
                    return -2147483648;
                else
                    return 2147483647;
            }
            i++;
        }
        return num*sign;
    }
};