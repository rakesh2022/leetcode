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
    unordered_map<Node*,Node*>mp;
    Node* clone(Node* node){
        if(node && !mp[node]){
            Node* newNode= new Node(node->val);
            mp[node]=newNode;
            for(auto tmp:node->neighbors)
            newNode->neighbors.push_back(clone(tmp));
        }
        return mp[node];
    }
    Node* cloneGraph(Node* node) {
        mp.clear();
        return clone(node);
    }
};