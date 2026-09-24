class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea =-1;
        int left=0;
        int right = height.size()-1;
        while(left<right){
            int width = right - left;
            int high = min(height[left],height[right]);
            int curarea = width*high;
            if(curarea>maxarea){
                maxarea=curarea;
            }
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxarea;
    }
};