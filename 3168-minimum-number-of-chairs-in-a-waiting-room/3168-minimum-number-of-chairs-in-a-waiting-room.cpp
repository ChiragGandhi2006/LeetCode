class Solution {
public:
    int minimumChairs(string s) {
        int maxcount=0;
        int count=0;

        for(char ch:s){
            if(ch=='E'){
                count++;
            }
            else if(ch=='L'){
                count--;
            }

            maxcount=max(maxcount,count);
        }

        return maxcount;
        
    }
};