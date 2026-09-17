class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left =0;
        int answers =0;
        long long  product =1;
        if(k<=1){
            answers=0;
            return answers;
        }
        for(int right=0;right<nums.size();right++){
               product = product*nums[right];
               while(product>=k){
                     product = product/nums[left];
                     left++;
               }

        answers+= right-left+1;

        }
        return answers;
    }
};