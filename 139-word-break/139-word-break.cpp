  unordered_set<string>st;
  int t[1100][1100];
class Solution
{
public:
bool isPresent(string s){
    if(st.find(s)!=st.end())return true;
    return false;
}
  bool solve(string &s,int i,int j){
      if(i>j)return true;
      if(i==j){
           return true;
      }
      // if(isPresent(s.substr(i,j-i+1))) return t[i][j]=true;
      if(t[i][j]!=-1)return t[i][j];
      for(int k=i;k<j;k++){
          if(t[i][k]==-1){
              t[i][k]=isPresent(s.substr(i,k-i+1));
          }
          if(t[i][k]==1){
              if(t[k+1][j]==-1)
                  t[k+1][j]= solve(s,k+1,j);
              if(t[k+1][j]==1)return t[i][j]= true;
          }
          
         
          
      }
      return t[i][j]=false;
      
  }
    bool wordBreak(string A, vector<string>& B) {
         st.clear();
      memset(t,-1,sizeof(t));
        for(auto i: B){
            st.insert(i);
            // cout<<i<<endl;
        }
        
      return  solve(A,0,A.length());
    }
};