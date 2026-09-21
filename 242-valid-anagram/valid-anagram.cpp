class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> freqMap;
        for(char x: s){
            freqMap[x]++;
        }
        for(char y:t){
            freqMap[y]--;
        }
        for(const auto&[key,value]:freqMap){
            if(value==0){
                return true;
            }
            else{
                return false;
            }
        }
        return 0;
    }
};