class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

    
        int long long res = 0;
        int low = 0;
        int long long sum = 0;

        for(int high= 0; high < nums.size();high++){

            mp[nums[high]]++;

            sum = sum + nums[high];

        if(high - low + 1 > k){

            mp[nums[low]]--;

            if(mp[nums[low]] == 0)

                mp.erase(nums[low]);

                sum = sum - nums[low];
                low++;
        }

        if(mp.size() == k && high-low+1 == k){

            res = max(res,sum);
        }

        }
         
        
        return res;

    }
};