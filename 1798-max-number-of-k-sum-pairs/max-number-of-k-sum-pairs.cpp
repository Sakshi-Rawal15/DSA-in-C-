class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());

        int high = nums.size()-1;
        int sum = 0;
        int low = 0;
        int count = 0;

        while(low < high){

            sum = nums[low] + nums[high];

            if(sum == k){

                count++;

                low++;
                high--;
            }

            else if(sum > k){
                high--;
            }

            else{
                low++;
            }
        }

        return count;


        
        
    }
};