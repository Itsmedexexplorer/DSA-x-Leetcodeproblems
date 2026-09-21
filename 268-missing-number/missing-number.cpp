class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalsum = (n*(n+1))/2;
        int sum =0;
        for(int x:nums){
            sum+=x;
        }
        return totalsum-sum;

    }
};