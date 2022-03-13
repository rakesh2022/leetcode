// #include<bits/stdc++.h>
// using namespace std;
class Solution {
public:
    int findMin(int a,int b){
        return a=a<=b?a:b;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int minLen=INT_MAX;
        if(strs.size()==1)return strs[0];
        
        for(int i=0;i<strs.size();i++){
                        minLen=findMin(minLen,strs[i].length());
        }
        if(minLen==0)return "";
        for(int i=0;i<minLen;i++){
            for(int j=0;j<strs.size()-1;j++){
              if(strs[j][i]!=strs[j+1][i])
                  return strs[0].substr(0,i);
            }
        }
        return strs[0].substr(0,minLen);
    }
};