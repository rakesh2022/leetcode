//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
  bool check(string s){
      int n=s.length();
      if(n<=0 || n>3)return false;
      if(s[0]=='0' && n>1)return false;
      int num=stoi(s);
      if(num>255)return false;
      return true;
  }
  
  string generate(string &s, int i,int j,int k){
      string s1=s.substr(0,i+1);
      string s2=s.substr(i+1,j-i);
      string s3=s.substr(j+1,k-j);
      string s4=s.substr(k+1);
      if(check(s1) && check(s2) && check(s3) && check(s4)){
          return s1+"."+s2+"."+s3+"."+s4;
      }
      return "";
  }
    vector<string> genIp(string &s) {
       vector<string>res;
       int n=s.length();
      for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
              for(int k=j+1;k<n;k++){
                  string str= generate(s,i,j,k);
                  if(str.size()){
                      res.push_back(str);
                  }
              }
          }
      }
      return res;
    }

};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        /*generating naively*/
        Solution obj;
        vector<string> str = obj.genIp(s);
        sort(str.begin(), str.end());
        if(str.size()==0)
            cout << -1 << "\n";
        else{
            for (auto &u : str) {
                cout << u << "\n";
            }
        }
    }
}
// } Driver Code Ends