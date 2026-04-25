class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int miss=0;
        int mixs=0;
        for(int i=0;i<arr.size();i++){
            miss=miss^arr[i];
        }
        for(int j=1;j<=arr.size()+1;j++){
            mixs=mixs^j;
            
            
        }
        return miss^mixs;
        
    }
};