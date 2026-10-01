class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n = ops.size();
        
        stack<int>st;
        int res = 0;
        

        for(int i = 0;i < n;i++){

            if(ops[i] == "C"){
                st.pop();
            }
            else if(ops[i] == "D"){
                st.push(2 * st.top());
            }
            else if(ops[i] == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            }
            else{
                st.push(stoi(ops[i]));
            }

        }

            if(st.empty()){
                return 0;
            }
            while(!st.empty()){
                res += st.top();
                st.pop();
            }

            return res;

            

        
        
    }
};