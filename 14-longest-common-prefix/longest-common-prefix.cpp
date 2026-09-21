class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minlength = strs[0].length();
        for(int i=1;i<strs.size();i++){
            minlength= min((int)strs[i].length(),minlength);
        }
        string ans = "";
        for(int i=0;i<minlength;i++){
            
           for(int j=0;j<strs.size();j++){
              if(strs[j][i]!=strs[0][i]){
                 return ans;
              }
           }
           
            ans+=strs[0][i];
           
        }
        return ans;
    }
};