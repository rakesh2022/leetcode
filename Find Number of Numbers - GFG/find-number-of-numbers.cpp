// { Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
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
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}// } Driver Code Ends


/*Complete the function given below*/
int k_appears(string s,string k){
    char ch=k[0];
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==ch)cnt++;
    }
    return cnt;
}
int num(int a[], int n, int k)
{
    int res=0;
     for(int i=0;i<n;i++){
         res+=k_appears(to_string(a[i]),to_string(k));
     }
     return res;
}