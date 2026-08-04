class Solution {
public:



int maxsum(vector <int> nums){

    int bestend = nums[0];
    int ans = nums[0];

    for(int i =1;i<nums.size();i++){

        int v1 = bestend + nums[i];
        int v2 = nums[i];

        bestend = max(v1,v2);
        ans = max(ans,bestend);
        
        
        }
        
        return ans;
}


int minsum(vector<int> nums){

    int bestend = nums[0];
    int ans = nums[0];

    for(int i = 1;i<nums.size();i++){

        int v1 = bestend + nums[i];
        int v2 = nums[i];
        bestend = min(v1,v2);
        ans = min(ans,bestend);
    }

    return ans;
}
    int maxAbsoluteSum(vector<int>& nums) {

        int maxi = maxsum(nums);
        int mini = minsum(nums);

        return max(abs(maxi),abs(mini));


        
    }
};