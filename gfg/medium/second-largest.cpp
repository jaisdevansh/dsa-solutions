class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int ans=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(ans<arr[i]){
                ans=arr[i];
            }
        }
         int second=-1;
        for(int i=0;i<arr.size();i++){
            if(ans!=arr[i]){
                second=max(arr[i],second);
            }
        }
        return second;
    }
};