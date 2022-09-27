/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> emp, int id) {
        queue<Employee*>q;
        int ans=0;
        Employee* e;
        vector<Employee*>imp(2001);
        for(int i=0;i<emp.size();i++){
            if(emp[i]->id == id){
                e=emp[i];
            }
            imp[emp[i]->id]= emp[i];
        }
        q.push(e);
        int n=2001;
        vector<int>vis(n+1,0);
        vis[id]=1;
        while(!q.empty()){
           e=q.front();
            q.pop();
            ans+= imp[e->id]->importance;
            cout<<e->id<<endl;
            for(auto &v:imp[e->id]->subordinates){
                if(vis[v]==0){
                    vis[v]=1;
                    q.push(imp[v]);
                }
            }
        }
        return ans;
        
    }
};