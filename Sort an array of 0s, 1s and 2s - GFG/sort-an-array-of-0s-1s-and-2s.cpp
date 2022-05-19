// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int fre[3]={};
        for(int i=0;i<n;i++){
            int x=a[i];
            fre[x]++;
        }
        for(int i=0;i<n;i++){
            if(fre[0]>0){
                a[i]=0;
             fre[0]--;   
            }
            else if(fre[1]>0){
                a[i]=1;
             fre[1]--;   
            }
            else{
                a[i]=2;
                fre[2]--;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends