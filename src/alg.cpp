// Copyright 2021 NNTU-CS
#include  "bst.h"

BST<std::string> makeTree(const char* filename) {
    std::ifstream file(filename);
    BST<std::string> tree;
    std::string text;
    if (file) {
        while (!file.eof()) {
            text.erase();
            while (true) {
                char chr = file.get();
Expand All
	@@ -20,10 +19,10 @@ BST<std::string> makeTree(const char* filename) {
                    break;
                }
            }
            if (!text.empty()) {
                tree.newNode(text);
            } else {
                continue;
            }
        }
        file.close();
    } else {
        std::cout << "File error!" << std::endl;
    }
    return tree;
}        
