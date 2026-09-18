class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        for(char ch: s){
            if(isalnum(ch)){
                s2+=tolower(ch);
            }
           
        }
        string s3 = s2;
        reverse(s2.begin(),s2.end());
        if(s2== s3){
            return true;
        }
        else{
            return false;
        }
    }
};