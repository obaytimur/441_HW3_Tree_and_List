//
// Created by ogi on 26.01.2022.
//

#include<iostream>
#include "node.h"
using namespace std;

node::node() {
    ProcessID=0;
    ArrivalTime=0;
    RunTime=-1;
    Priority=0;
    tail=NULL;
}

void node::newNode(int id, int atime, int rtime, int prio) {
    ProcessID=id;
    ArrivalTime=atime;
    RunTime=rtime;
    Priority=prio;
    tail=NULL;
}
