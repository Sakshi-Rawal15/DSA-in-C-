class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int sum = 0;
        int maxi;
        int n = nums.size();

        for(int i = 0;i<k;i++){

            sum = sum + nums[i];

            maxi = sum;
        }

        for(int i = k;i < n;i++){
            sum = sum - nums[i-k]+nums[i];

            maxi = max(maxi,sum);

        }

        return (double)maxi/k;
        
    }
};