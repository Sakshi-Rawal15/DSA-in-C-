class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;

        int res = 0;
        int zero = 0;
        int one = 0;
        int n = nums.size();

        for(int i = 0;i < n;i++){

            if(nums[i] == 0){
                zero++;
            }
            else{
                one++;
            }

            int diff = zero - one;
            if(zero - one == 0){
                res = max(res,i+1);

                continue;
            }

            if(mp.find(diff) == mp.end(diff)){
                mp[diff] = i;
            }
            else{
                int idx = mp[diff];
                int len = i - idx;
                res = max(res,len);
            }

        }
        return res;
    }
};