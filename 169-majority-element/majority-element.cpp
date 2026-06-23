class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int val : nums){
            int freq = 0;
            int n  = nums.size();

            for(int el : nums){
                if(el == val){
                    freq++;
                }
                
                
            }

            if(freq > n/2){
                return val;
            }
        }
        return -1;
        
    }
};