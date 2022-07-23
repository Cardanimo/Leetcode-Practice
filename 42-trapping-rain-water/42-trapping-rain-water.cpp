class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size()< 1){
            return 0;
        }

        int right=height.size()-1;
        int left = 0;

        int left_max=height[left];
        int right_max=height[right];

        int result=0;

        while(left < right){

            if(left_max < right_max){
                left++;
                left_max = max(left_max,height[left]);
                result += left_max - height[left];

            } else {
                right--;
                right_max = max(right_max,height[right]);
                result += right_max - height[right];

            }
        }
        return result;

    }
};