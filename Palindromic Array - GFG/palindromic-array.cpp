// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    bool palin(int x){
        int nnum=0;
        int tnum=x;
        while(tnum){
            int rem=tnum%10;
            nnum=nnum*10+rem;
            tnum/=10;
        }
        if(x==nnum)return true;
        return false;
    }
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++){
    	    if(palin(a[i])==false)return 0;
    	}
    	return 1;
    	
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends