class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int n = pow(nums[i],2);
            ans.emplace_back(n);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};