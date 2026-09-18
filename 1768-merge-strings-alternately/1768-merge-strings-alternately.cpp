class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s3;
        int n = max(word1.length(),word2.length());
        for(int i=0;i<n;i++){
            for(int j=i;j<i+1;j++){
                if(i<word1.length()){
                    s3+=word1[i];
                }
                
                if(j<word2.length()){
                    s3+=word2[j];
                }
            }
        }
        return s3;
    }
};