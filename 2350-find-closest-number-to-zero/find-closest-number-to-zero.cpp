class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];
        if(nums.size()<=1){
            return nums[0];
        } 
        for(int i=1; i<nums.size();i++){
            
             int cur = nums[i];
             if(abs(cur)< abs(closest)){
                closest = cur;
             }
             else if(abs(cur)== abs(closest)){
                closest = max(cur, closest);
             }
        }
        return closest;
    }
};