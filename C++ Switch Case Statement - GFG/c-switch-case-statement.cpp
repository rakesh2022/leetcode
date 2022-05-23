// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string isInRange(int N){
        switch(N){
        case 1:
        return "one";
        case 2:
        return "two";
        case 3:
        return "three";
        case 4:
        return "four";
        case 5:
        return "five";
        case 6:
        return "six";
        case 7:
        return "seven";
        case 8:
        return "eight";
        case 9:
        return "nine";
        case 10:
        return "ten";
        default:
        return "not in range";
        }
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isInRange(N) << endl;
    }
    return 0; 
}   // } Driver Code Ends