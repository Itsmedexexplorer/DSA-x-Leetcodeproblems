class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left =0;
        int right = numbers.size()-1;
        vector<int> answers;
        while(left<right){
            int sum = numbers[left]+numbers[right];
            if(sum==target){
                  answers.emplace_back(left+1);
                  answers.emplace_back(right+1);
                  break;
                  
            }else if(sum<target){
                left++;
            }else{
                right--;
            }
        }
       return answers;
    }
};