// { Driver Code Starts
 

#include<bits/stdc++.h>
using namespace std;
 
int findDuplicate(int a[]);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int A[10];
		for(int i=0;i<10;i++)
		cin>>A[i];
		
		cout<<findDuplicate(A)<<endl;
	}
}// } Driver Code Ends

int findDuplicate(int A[])
{
   for(int i=1;i<10;i++){
       if(A[i-1]==A[i])return A[i];
   }
   return -1;
}