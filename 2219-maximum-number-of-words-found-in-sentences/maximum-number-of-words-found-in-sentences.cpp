class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxwordcount =0;
        for(string sentence:sentences){
            int wordcount =1;
            for(char ch :sentence){
                
                if(ch==' '){
                   wordcount++;
                }
            }
            if(wordcount>maxwordcount){
                maxwordcount=wordcount;
            }
        }
        return maxwordcount;
    }
};