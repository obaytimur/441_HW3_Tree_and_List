//
// Created by ogi on 27.01.2022.
//

#ifndef HW3_LIST_NODE_H
#define HW3_LIST_NODE_H


class node {
public:
    int ProcessID, ArrivalTime, RunTime, Priority;
    node* tail;

    node();
    void newNode(int id, int atime, int rtime, int prio);
};


#endif //HW3_LIST_NODE_H
