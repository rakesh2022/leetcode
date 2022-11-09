#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findLps(string s){
        int n=s.length();
        vector<int>lps(n);
        int i=0,j=1;
        while(j<n){
            if(s[i]==s[j]){
                lps[j++]=++i;
                // i++;
            }
            else{
                if(i!=0)i=lps[i-1];
                else j++;
            }
        }
        return lps;
        
    }
    int repeatedStringMatch(string a, string b) {
        
        // for(int i=0,j=0;i<a.size();i++){
        //     for(j=0;j<b.size() && a[(i+j)% a.size()] == b[j]; j++);
        //     if(j==b.size()){
        //         return (j+i-1)/a.size() + 1;
        //     }
        // }
        // return -1;
        vector<int>lps=findLps(b);
        int i=0,j=0;
        while(i<a.size()){
            while(j<b.size() && a[(i+j)%a.size()]==b[j]) j++;
            if(j==b.size())return (j+i-1)/a.size() +1;
            if(j!=0){
                i+= (j-lps[j-1]);
                j=lps[j-1];
            }
            else
                i++;
        }
        return -1;
    }
};