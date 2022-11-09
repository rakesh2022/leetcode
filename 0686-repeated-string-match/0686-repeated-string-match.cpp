class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        
        for(int i=0,j=0;i<a.size();i++){
            for(j=0;j<b.size() && a[(i+j)% a.size()] == b[j]; j++);
            if(j==b.size()){
                return (j+i-1)/a.size() + 1;
            }
        }
        return -1;
        
    }
};