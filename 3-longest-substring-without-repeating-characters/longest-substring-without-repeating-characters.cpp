class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
                unordered_map<char, int> mp;
                        
                                int low = 0;
                                        int res = 0;
                                                
                                                        for (int high = 0; high < s.size(); high++) {
                                                                    mp[s[high]]++;
                                                                                
                                                                                            // If duplicate found
                                                                                                        while (mp[s[high]] > 1) {
                                                                                                                        mp[s[low]]--;
                                                                                                                                        low++;
                                                                                                                                                    }
                                                                                                                                                                
                                                                                                                                                                            res = max(res, high - low + 1);
                                                                                                                                                                                    }
                                                                                                                                                                                            
                                                                                                                                                                                                    return res;
                                                                                                                                                                                                        }
                                                                                                                                                                                                        };
