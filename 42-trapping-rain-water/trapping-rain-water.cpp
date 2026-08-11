class Solution {
public:
    int trap(vector<int>& height) {

        int leftmax = 0;
        int rightmax = 0;

        int water = 0;
        int left = 0;
        int right = height.size()-1;

        while(left < right){

            if(height[right] >= height[left]){

                if(height[left] >= leftmax){

                    leftmax = height[left];
                }

                else{

                    water = water + leftmax - height[left];

                }

                left++;

            }

            else{

            if(height[right] >= rightmax){
                rightmax = height[right];

            }

            else{

                water = water + rightmax - height[right];
            }

            right--;
        }

        }

        return water;
     
    }
};