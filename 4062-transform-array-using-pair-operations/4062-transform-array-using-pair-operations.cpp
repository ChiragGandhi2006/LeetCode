class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        int n=source.size();
        int m=target.size();
        long long sor=0;
        long long tar=0;

        if(n!=m){
            return false;

        }

        for(int x:source){
            sor+=x;
        }

        for(int y:target){
            tar+=y;
        }

        if(sor==tar){
            return true;
        }

        return false;


        
    }
};