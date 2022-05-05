//
// Created by ogi on 26.01.2022.
//

#include "list.h"
#include<iostream>
using namespace std;

list::list() {
    head=NULL;
    int node_visited_delete = 0;
    int node_visited_search = 0;
    int node_visited_insert = 0;
}

bool list::IsEmpty() {
    if(head == NULL)
        return true;
    else
        return false;
}

node* list::MinPrio() {
    if(head==NULL){
        return NULL;
    }
    else if (head->tail==NULL){
        node* par=head;
        head=NULL;
        node_visited_search++;
        return par;
    }
    else{
        node* temp1=head;
        node* temp2=head->tail;
        while(temp2->tail!=NULL){
            temp2=temp2->tail;
            temp1=temp1->tail;
            node_visited_search++;
        }
        temp1->tail=NULL;
        return temp2;
    }
}

void list::SortedInsert(node** headref, node *par) {
    node* parameter;
    if(*headref==NULL || (*headref)->Priority<par->Priority){
        par->tail=*headref;
        *headref= par;
    }
    else{
        parameter= *headref;
        while(parameter->tail!=NULL && parameter->tail->Priority>=par->Priority){
            parameter=parameter->tail;
            node_visited_insert++;
        }
        par->tail=parameter->tail;
        parameter->tail=par;
    }
}

void list::DeleteLast(node* par) {
    node* temp=head;
    while(temp->tail!=NULL){
        temp=temp->tail;
    }
    temp=NULL;
    par=NULL;
}

