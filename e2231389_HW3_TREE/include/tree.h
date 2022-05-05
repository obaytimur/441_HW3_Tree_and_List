//
// Created by ogi on 26.01.2022.
//

#ifndef OGI_HW3_TREE_TREE_H
#define OGI_HW3_TREE_TREE_H
#include "node.h"

class tree {
public:
    int node_visited_delete;
    int node_visited_search;
    int node_visited_insert;
    node* root;
    tree();
    bool IsEmpty();
    int depth(node* rootnode);
    node* MinValue(node* par);
    node* NewTreeNode(int id, int atime, int rtime, int prio);
    void NodeInsert(node* par);
    node* NodeDelete(node* rootnode, int key);

};


#endif //OGI_HW3_TREE_TREE_H
