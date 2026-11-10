class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> licensefreq(26,0);

        for(char ch:licensePlate){
            if(isalpha((ch))){
                ch=tolower(ch);
                licensefreq[ch-'a']++;
            }
        }
        string ans="";
        for(string word:words){
            vector<int> wordfreq(26,0);

            for(char ch: word){
                wordfreq[ch-'a']++;
            }

            bool valid= true;

            for(int i=0;i<26;i++){
                if(wordfreq[i]<licensefreq[i]){
                    valid=false;
                    break;
                }
            }

            if(valid && (ans == "" || word.size() < ans.size())){
                ans=word;
            }
        }
        return ans;
    }
};