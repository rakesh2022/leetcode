class Solution {
public:
int solve(char x){
    if(x=='a')return 1;
    if(x=='b')return 5;
    if(x=='c')return 10;
    if(x=='d')return 50;
    if(x=='e')return 100;
    if(x=='f')return 500;
    if(x=='g')return 1000;
    return 0;
}
    int romanToInt(string s) {
    
        int num=0,n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='I')s[i]='a';
            else if(s[i]=='V')s[i]='b';
            else if(s[i]=='X')s[i]='c';
            else if(s[i]=='L')s[i]='d';
            else if(s[i]=='C')s[i]='e';
            else if(s[i]=='D')s[i]='f';
            else s[i]='g';
        }
        if(n==1){
            return solve(s[0]);
        }
        for(int i=0;i<n-1;i++){
            if(s[i]<s[i+1]) num-=solve(s[i]);
            else num+=solve(s[i]);
        }
        num+=solve(s[n-1]);
        return num;
        
    }
};