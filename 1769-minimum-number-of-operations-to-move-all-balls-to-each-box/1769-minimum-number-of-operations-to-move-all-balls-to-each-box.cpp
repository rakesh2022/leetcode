class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
      vector<int>left(n,0),right(n,0),res(n,0);
        int cnt1=0,el=0;
        for(int i=0;i<n;i++){
            left[i]=cnt1;
            cout<<left[i]<<" ";
            
            
         el+= boxes[i]=='1';  
            cnt1+=el;
        }
        cnt1=0,el=0;
        cout<<endl;
        for(int i=n-1;i>=0;i--){
            right[i]=cnt1;
            cout<<right[i]<<" ";
            el+= boxes[i]=='1';  
            cnt1+=el; 
        }
        for(int i=0;i<n;i++){
            res[i]=left[i]+right[i];
        }
        return res;
    }
};