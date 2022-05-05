//
// Created by ogi on 27.01.2022.
//

#ifndef HW3_LIST_LIST_H
#define HW3_LIST_LIST_H
#include "node.h"

class list {
public:
    int node_visited_delete;
    int node_visited_search;
    int node_visited_insert;
    node* head;
    list();
    bool IsEmpty();
    node* MinPrio();
    void SortedInsert(node** headref, node* par);
    void DeleteLast(node* par);
};


#endif //HW3_LIST_LIST_H
