// Copyright 2021 NNTU-CS
#ifndef INCLUDE_BST_H_
#define INCLUDE_BST_H_
#include <iostream>
template <typename T>
class BST {
 private:
    struct Node {
        T val;
        unsigned int count;
        Node* l;
        Node* r;
    };
    Node* root = nullptr;
    int searchNodeTree(Node* root, const T& value) {
        if (node == nullptr) {
            return 0;
        } else if (root->val > value) {
            return searchNodeTree(root->l, value);
        } else if (root->val < value) {
            return searchNodeTree(root->r, value);
        } else {
            return root->count;
        }
        return 0;
    }
    int getDepthTree(Node* root) {
        if (root == nullptr)
            return 0;
        int rDepth = getDepthTree(root->r),
            lDepth = getDepthTree(root->l);
        return (lDepth > rDepth) ? lDepth + 1 : rDepth + 1;
    }
    Node* newNodeTree(Node* root, const T& value) {
Expand All
	@@ -53,10 +53,10 @@ class BST {
        return searchNodeTree(node, value);
    }
    int depth() {
        return getDepthTree(root) - 1;
    }
    void newNode(const T& value) {
        node = newNodeTree(root, value);
    }
};

#endif  // INCLUDE_BST_H_
