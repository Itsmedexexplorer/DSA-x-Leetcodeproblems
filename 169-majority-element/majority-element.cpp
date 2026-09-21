class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> freqMap;
        for(int num:nums){
            freqMap[num]++;
        }
        for(const auto&[key,value]:freqMap){
            if(value>int(n/2)){
                return key;
            }
        }
        return 0;
    }
};