class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;

        if(nums.size() < 4)
        return ans;
        sort(nums.begin(),nums.end());


        for(int i =0;i<nums.size()-3;i++){

            if(i > 0 && nums[i] == nums[i-1]){

                continue;
            }

                for(int j = i+1; j<nums.size()-2;j++){
                    if(j > i+1 && nums[j] == nums[j-1]){
                        continue;
                    }
           
            int k = j+1;
            int high = nums.size()-1;

            while(k < high){

                long long sum = (long long) nums[i] + nums[j] + nums[k] + nums[high];

                if(sum == target){

                    ans.push_back({nums[i], nums[j], nums[k], nums[high]});
        
                
                    k++;
                    high--;


                  
                    while(k < high && nums[k] == nums[k-1]){
                        k++;
                    }
                    while(k < high && nums[high] == nums[high+1]){
                        high--;
                    }
                }

                else if(sum < target){
                    k++;

                }
                else{
                    
                    high--;
                }

            }

        } 
    }

        return ans;
        
    }
};