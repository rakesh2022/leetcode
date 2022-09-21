class Solution {
public:
    int t[101][101];
    bool isOk(string s){
        if(s.length()>2)return false;
        int tmp=stoi(s);
        if(s.length()==2 && (tmp<10 || tmp >26))return false;
        if(s.length()==1 && s[0]=='0')return false;
        return true;
    }
    int mcm(string& s,int i,int j){
        // if(i>j)return 0;
        if(i==j)
            return 1;
        if(t[i][j]!= -1)return t[i][j];
        int res=0;
        for(int k=i;k<j && k<i+2;k++){
            // if()
           if(isOk(s.substr(i,k-i+1))){
               if(t[k+1][j]== -1)
                   t[k+1][j]= mcm(s,k+1,j);
               res += t[k+1][j];
               }
           }
        return t[i][j]= res;
    }
    int numDecodings(string s) {
        memset(t,-1,sizeof(t));
       return mcm(s,0,s.size()) ;
    }
};