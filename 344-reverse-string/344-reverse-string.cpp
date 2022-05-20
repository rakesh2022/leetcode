class Solution {
public:
    void reverseString(vector<char>& s){
        int n=s.size();
        if(n<2)return;
        int i=0,j=n-1;
        while(i<j){
            
            swap(s[i],s[j]);
            i++;j--;
        }
    
    }
};