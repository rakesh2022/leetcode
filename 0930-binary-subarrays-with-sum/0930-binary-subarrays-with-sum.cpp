class Solution {
public:
    int atMostGoal(vector<int>&A,int goal){
     int i=0,j=0,sum=0,ans=0;
        for(;j<A.size();j++){
            sum+=A[j];
            while(sum>goal)sum-=A[i++];
            ans+=(j-i+1);
        }
       return ans;
    }
    int numSubarraysWithSum(vector<int>& A, int goal) {
        if(goal==0)return atMostGoal(A,goal);
       return atMostGoal(A,goal)-atMostGoal(A,goal-1);
    }
};