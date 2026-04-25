public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>> ans;
        int target = 0;

        sort(arr.begin(), arr.end());

        int i = 0, j = arr.size() - 1;

        while(i < j){

            if(arr[i] + arr[j] == target){

                ans.push_back({arr[i], arr[j]});
                i++;
                j--;

                while(i < j && arr[i] == arr[i-1]){
                    i++;
                }

                while(i < j && arr[j] == arr[j+1]){
                    j--;
                }
            }

            else if(arr[i] + arr[j] > target){
                j--;
            }

            else{
                i++;
            }
        }

        return ans;
    }
};