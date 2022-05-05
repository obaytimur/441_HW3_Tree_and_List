//
// Created by ogi on 26.01.2022.
//

#include "tree.h"
#include<iostream>
using namespace std;

tree::tree() {
    root=NULL;
    int node_visited_delete = 0;
    int node_visited_search = 0;
    int node_visited_insert = 0;
}

bool tree::IsEmpty() {
    if(root==NULL)
        return true;
    else
        return false;
}

node* tree::MinValue(node * par) {
    node* parameter;
    parameter=par;
    while(parameter->left!=NULL){
        parameter=parameter->left;
        node_visited_search++;
    }
    return parameter;
}

void tree::NodeInsert(node* par) {
    node* child= par;
    node* parent=NULL;

    if (IsEmpty()){
        root=child;
    }
    else{
        node* var;
        var = root;
        while(var){
            parent=var;
            if(child->Priority>var->Priority){
                var=var->right;
                node_visited_insert++;
            }
            else{
                var=var->left;
                node_visited_insert++;
            }
        }
        if(child->Priority>parent->Priority){
            parent->right=child;
            node_visited_insert++;
        }
        else{
            parent->left=child;
            node_visited_insert++;
        }
    }
}

node* tree::NodeDelete(node* rootkey, int key) {
    if(rootkey==NULL)
        return rootkey;
    else{
        if (key>rootkey->Priority){
            rootkey->right= NodeDelete(rootkey->right, key);
            node_visited_delete++;
        }
        else if(key<rootkey->Priority){
            rootkey->left= NodeDelete(rootkey->left,key);
            node_visited_delete++;
        }
        else{
            if (rootkey->left==NULL && rootkey->right==NULL){
                node_visited_delete++;
                return NULL;

            }
            else if(rootkey->right==NULL){
                node* var;
                var=rootkey->left;
                //free( rootkey);
                rootkey=NULL;
                node_visited_delete++;
                return var;
            }
            else if(rootkey->left==NULL) {
                node *var;
                var = rootkey->right;
                //free( rootkey);
                rootkey=NULL;
                node_visited_delete++;
                return var;
            }
            node* var;
            int temp;
            temp = node_visited_search;
            var= MinValue(rootkey->right);
            node_visited_search=temp;
            node_visited_delete++;
            rootkey->Priority=var->Priority;
            rootkey->right= NodeDelete(rootkey->right,var->Priority);
        }
        return rootkey;
    }
}
