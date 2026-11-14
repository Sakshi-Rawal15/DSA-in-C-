class Solution {
public:
    int countGoodSubstrings(string s) {

        unordered_map<char, int> mp;

        int k = 3;
        int count = 0;

        if(s.length() < 3){
            return 0;
        }


        for(int i = 0;i <= s.length()-k;i++){

            mp.clear();


            mp[s[i]]++;
            mp[s[i+1]]++;
            mp[s[i+2]]++;

            if(mp.size() == 3){

                count ++;
            }
        }

        return count;
        
    }
};