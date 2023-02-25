#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void dfs(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    dfs(root->left);
    dfs(root->right);
}

void dfs_inorder(Node* root) {
    if (root == NULL) return;
    dfs_inorder(root->left);
    cout << root->data << " ";
    dfs_inorder(root->right);
}

void dfs_postorder(Node* root) {
    if (root == NULL) return;
    dfs_postorder(root->left);
    dfs_postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    cout << "Preorder traversal: ";
    dfs(root);
    cout << endl;
    cout << "Inorder traversal: ";
    dfs_inorder(root);
    cout << endl;
    cout << "Postorder traversal: ";
    dfs_postorder(root);
    cout << endl;
    return 0;
}
