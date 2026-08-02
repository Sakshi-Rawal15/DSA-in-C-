class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int low = 0;

        for(int high = 0;high<nums.size();high++){

            if(nums[high] != val)
            {

                nums[low] = nums[high];

                low++;
                
            }    
            
         }
         
         return low;
        
    }
};