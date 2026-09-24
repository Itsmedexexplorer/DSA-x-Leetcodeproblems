class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minnum = INT_MAX;
        int maxnum = INT_MIN;
        for(int x:nums){
            if(x<minnum){
                minnum=min(x,minnum);
            }
            if(x>maxnum){
                maxnum=max(x,maxnum); 
            }
        }
        return gcd(minnum,maxnum);
    }
};