class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;

        int low = 0;
        int high = 0;
        int res = 0;
        int k = 2;

        for(int high = 0;high < fruits.size();high++){

            mp[fruits[high]]++;

            while(mp.size() > k){
                mp[fruits[low]]--;

                if(mp[fruits[low]]== 0) {
                    mp.erase(fruits[low]);
                }
                low++;
              
            
            }

            res = max(res,high - low +1);
        }

        return res;
        
    }
};