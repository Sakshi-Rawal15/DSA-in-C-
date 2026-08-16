class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>f(256,0);

        int low = 0;
        int maxfreq = 0;
        int ans = INT_MIN;


        for(int high = 0;high < s.size();high++){

            f[s[high]]++;

            maxfreq = max(maxfreq,f[s[high]]);
        

        while((high-low+1) - maxfreq > k){

            f[s[low]]--;

            low++;
        }

        ans = max(maxfreq,high-low+1);

        }
        return ans;

        
        
    }
};