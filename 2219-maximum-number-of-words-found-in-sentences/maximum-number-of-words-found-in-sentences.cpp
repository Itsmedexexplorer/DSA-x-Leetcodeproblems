class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int maxwords = 0;

        for(string sentence: sentences){
            int wordcount = 1;
            
            for(char ch:sentence){

                if(ch == ' '){
                    wordcount++;
                }
            }

            if(wordcount>maxwords){
                maxwords=wordcount;
            }
        }

        return maxwords;
    }
};