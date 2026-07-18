class Solution {
    public:
        int findMax(unordered_map<char, int> &mp) {
                int maxi = 0;

                        for (pair<const char, int> p : mp) {
                                    if (p.second > maxi)
                                                    maxi = p.second;
                                                            }

                                                                    return maxi;
                                                                        }

                                                                            int characterReplacement(string s, int k) {

                                                                                    unordered_map<char, int> mp;

                                                                                            int low = 0;
                                                                                                    int res = 0;

                                                                                                            for (int high = 0; high < s.size(); high++) {

                                                                                                                        mp[s[high]]++;

                                                                                                                                    int len = high - low + 1;
                                                                                                                                                int maxi = findMax(mp);
                                                                                                                                                            int diff = len - maxi;

                                                                                                                                                                        while (diff > k) {
                                                                                                                                                                                        mp[s[low]]--;
                                                                                                                                                                                                        low++;

                                                                                                                                                                                                                        len = high - low + 1;
                                                                                                                                                                                                                                        maxi = findMax(mp);
                                                                                                                                                                                                                                                        diff = len - maxi;
                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                len = high - low + 1;
                                                                                                                                                                                                                                                                                            res = max(res, len);
                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                            return res;
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                };
