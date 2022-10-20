/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
//      void dfs(Node* node, Node* prev, vector<Node*>& vis) {
//     // record in vis array
//     vis[prev->val] = prev;

//     for (auto curr : node->neighbors) {
//         // if not visited
//         if (vis[curr->val] == NULL) {
//             // make new node
//             Node* newNode = new Node(curr->val);

//             // save in neighbour of prev
//             (prev->neighbors).push_back(newNode);

//             // do dfs in both 
//             dfs(curr, newNode, vis);
//         }
//         else {
//             // visited then push the address of visited in prev's neighbors
//             (prev->neighbors).push_back(vis[curr->val]);
//         }
//     }
// }
    void dfs(Node* node, Node* clone, vector<Node*>&vis){
        vis[clone->val]=clone;
        for(auto v: node->neighbors){
            if(vis[v->val]==NULL){
                Node* newNode= new Node(v->val);
                (clone->neighbors).push_back(newNode);
                dfs(v, newNode,vis);
            }
            else{
                (clone->neighbors).push_back(vis[v->val]);
            }
        }
        
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL)return NULL;
        vector<Node*>vis(101,NULL);
        Node* newNode= new Node(node->val);
        dfs(node, newNode,vis);
        return newNode;
    }
   

};