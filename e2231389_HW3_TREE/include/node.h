//
// Created by ogi on 26.01.2022.
//

#ifndef OGI_HW3_TREE_NODE_H
#define OGI_HW3_TREE_NODE_H


class node {
public:
    int ProcessID, ArrivalTime, RunTime, Priority;
    node* left;
    node* right;

    node();
    void newNode(int id, int atime, int rtime, int prio);

};


#endif //OGI_HW3_TREE_NODE_H
