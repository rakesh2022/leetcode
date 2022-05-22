// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
   int num=0;
   while(n){
       int rem=n%10;
      num*=10;
      if(rem==0)num+=5;
      else num+=rem;
      n/=10;
   }
   string s=to_string(num);
   reverse(s.begin(),s.end());
   return stoi(s);
}