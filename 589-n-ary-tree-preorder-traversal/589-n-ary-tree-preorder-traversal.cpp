/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>v1;
    vector<int> preorder(Node* root) {
        recursive(root);
        return v1;
        
    }
    void recursive(Node* node){
        if(node==NULL)return;
        v1.push_back(node->val);
        for(int i=0;i<node->children.size();i++){
            recursive(node->children[i]);
            }
        
}
};