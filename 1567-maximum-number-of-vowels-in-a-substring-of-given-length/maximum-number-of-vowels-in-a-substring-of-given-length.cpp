class Solution {
public:
    int maxVowels(string s, int k) {
        int low = 0;
        int high = k-1;
        int count = 0;
        int res = 0;
        for(int i =0;i<= high;i++){

            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i]== 'u')
            count++;
        
          
        }
        res = count;
       
        while(high < s.size()-1){

            
            
            if(s[low] == 'a' || s[low] == 'e' || s[low] ==  'i' || s[low] =='o' || s[low]=='u'){
            count--;
        }
            low++;
            high++;
            
            if(s[high] == 'a' || s[high] ==  'e' || s[high] == 'i' || s[high] == 'o' || s[high] ==  'u'){
            count++;
            }

            res = max(res,count);
            
        }

        return res;
        
    }
};