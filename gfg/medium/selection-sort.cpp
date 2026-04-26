class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        for(int i=0;i<arr.size();i++){
            int idx=i;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]<arr[idx]){
                    idx=j;
                }
            }
            swap(arr[i],arr[idx]);
        }
        
        
    }
};