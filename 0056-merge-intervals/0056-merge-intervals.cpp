class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int i=0;
        sort(arr.begin(), arr.end());
        for(int j=1;j<arr.size();j++){
            if(arr[i][0]<=arr[j][1] && arr[i][1]>=arr[j][0]){
                arr[i][1]= max(arr[i][1],arr[j][1]);
            }
            else
                arr[++i]=arr[j];
        }
        arr.resize(i+1);
        return arr;
    }
};