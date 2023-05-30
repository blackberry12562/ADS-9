// Copyright 2021 NNTU-CS
#ifndef INCLUDE_BST_H_
#define INCLUDE_BST_H_
template <typename T>
class BST {
 private:
    struct Node {
        T val;
        unsigned int count;
        Node* l;
        Node* r;
    };
        Node* r;
    };
    Node* root = nullptr;
    int searchNodeTree(Node* node, const T& value) {
        if (node == nullptr) {
            return 0;
        } else if (node->val > value) {
            return searchNodeTree(node->l, value);
        } else if (node->val < value) {
            return searchNodeTree(node->r, value);
        } else {
            return node->count;
        }
        return 0;
    }
    int getDepthTree(Node* node) {
        if (node == nullptr)
            return 0;
        int rDepth = getDepthTree(node->r),
            lDepth = getDepthTree(node->l);
        return (lDepth > rDepth) ? lDepth + 1 : rDepth + 1;
    }
    Node* newNodeTree(Node* root, const T& value) {
Expand All
	@@ -53,10 +53,10 @@ class BST {
        return searchNodeTree(node, value);
    }
    int depth() {
        return getDepthTree(node) - 1;
    }
    void newNode(const T& value) {
        node = newNodeTree(node, value);
    }
};

#endif  // INCLUDE_BST_H_
#endif  // INCLUDE_BST_H_
