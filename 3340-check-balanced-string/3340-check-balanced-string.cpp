class Solution {
public:
    bool isBalanced(string num) {
        int SumO=0;
        int SumE=0;
        for(int i=0;i<num.size();i++){
            if(i%2==0){
                SumE+=num[i]-'0';
            }
            else{
                SumO+=num[i]-'0';
            }
        }
        if(SumE==SumO){
            return true;
        }
        return false;
    }
};