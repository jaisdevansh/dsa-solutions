class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        stack<int> st;
        vector<int> ans;
        int cnt = 0;

        for(int i = 0; i < str.size(); i++){
            
            if(str[i] == '('){
                cnt++;
                st.push(cnt);
                ans.push_back(cnt);
            }
            else if(str[i] == ')'){   
                
                if(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
                }
            }
        }
        return ans;
    }
};