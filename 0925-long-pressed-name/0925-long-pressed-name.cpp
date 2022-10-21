class Solution {
public:
    bool isLongPressedName(string name, string typed) {
      int i=1,j=1;
        if(name[0]!=typed[0])return false;
        while(i<name.size() && j<typed.size()){
            if(name[i]==typed[j])
                i++;
            else if(typed[j-1]!=typed[j])return false;
            j++;
        }
        if(i<name.size())return false;
        while(j<typed.size()){
            if(typed[j-1]!=typed[j])return false;
            j++;
        }
        return true;
    }
};