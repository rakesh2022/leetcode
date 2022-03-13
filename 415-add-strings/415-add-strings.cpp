class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
         reverse(num2.begin(),num2.end());
        string s="";
        int n1=num1.size(),n2=num2.size(),i=0,j=0,carry=0,sum=0;
        while(i<n1 && j<n2){
            sum=(num1[i]-'0')+(num2[j]-'0')+carry;
            s+=(to_string(sum%10));
            carry=sum/10;
            i++;
            j++;
        }
        while(i<n1){
            sum=(num1[i]-'0')+carry;
            s+=(to_string(sum%10));
            carry=sum/10;
            i++;
        }
        while(j<n2){
            sum=(num2[j]-'0')+carry;
            s+=(to_string(sum%10));
            carry=sum/10;
            j++;
        }
        if(carry!=0){
            s+=(to_string(carry));
        }
        reverse(s.begin(),s.end());
        return s;
    }
};