class Solution {
public:
    bool checkDivisibility(int n) {
        int count=0;
        int product=1;

        int temp=n;
        while(temp){
            count+=temp%10;
            product*=temp%10;
            temp= temp/10;
        }

        if(n % (count+product)==0){
            return true;
        }
        return false;

        
        
    }
};