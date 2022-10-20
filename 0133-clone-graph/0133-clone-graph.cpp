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
    unordered_map<Node*,Node*>mp;
    Node* clone(Node* node){
        if(mp.find(node)==mp.end()){
            mp[node]= new Node(node->val);
            for(auto v:node->neighbors){
                mp[node]->neighbors.push_back(clone(v));
            }
        }
        return mp[node];
    }
    Node* cloneGraph(Node* node) {
      mp.clear();
        if(node==NULL)return NULL;
        return clone(node);
    }
   

};