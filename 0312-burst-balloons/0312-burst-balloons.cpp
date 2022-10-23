class Solution {
public:
//     int solve(list<int>&L){
//         if(L.size()<=3){
//             int mul=1;
//             while(L.size()){
//                 mul*=L.back();
//                 L.pop_back();
//             }
//             return mul;
//         }
        
            
//     }
//     int mcm(vector<int>&nums,int i,int j){
//         if(i>j){
           
//             return 0;
//         }

//     }
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        nums.insert(nums.begin(),1);
        nums.push_back(1);
      vector<vector<int>>t(n+2,vector<int>(n+2));
        for(int i=n;i>=1;i--){
            for(int j=1;j<=n;j++){
                if(i>j)continue;
           int res=INT_MIN;
        for(int k=i;k<=j;k++){
            int temp= t[i][k-1] + t[k+1][j] + nums[i-1]* nums[k] *nums[j+1];
            res=max(res,temp);
        }
           t[i][j]=res;
            }
        }
        return t[1][n];
        
    }
};