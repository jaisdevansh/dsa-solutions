class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        unordered_set<int>st;
        for(int i=0;i<a.size();i++){
            st.insert(a[i]);
        }
        int cnt=0;
        for(int i=0;i<b.size();i++){
            int key=b[i];
            if(st.find(key)!=st.end()){
                cnt++;
            }
            
        }
        return cnt;
    
    }
};