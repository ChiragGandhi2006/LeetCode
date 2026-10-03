class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.size();
        int count=0;
        for(char ch:s){
            if(ch==letter){
                count++;
            }
        }

        int a= count*100;
        int ans=a/n;
        return ans;



       
        
    }
};