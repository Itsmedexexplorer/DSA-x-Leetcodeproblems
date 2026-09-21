class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>pops;
        for(int x:nums){
            pops[x]++;
        }
        for(auto& [key, value]:pops){
            if(value>1){
                return true;
            }
        }
        return false;
    }
};