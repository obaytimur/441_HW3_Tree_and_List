#include <iostream>
#include <fstream>
#include "node.h"
#include "list.h"
using namespace std;

int main() {
    /* reading processes from file */
    ifstream processesFile; /* input file stream */
    processesFile.open ("processes.txt");
    int numProcesses; /* number of processes */
    processesFile >> numProcesses; /* read from file */
    node process[numProcesses]; /* create Node array */
    int processID, arrivalTime, runTime, priority;
    for(int i=0; i<numProcesses; ++i){
/* read 4 integers from file */
        processesFile >> processID >> arrivalTime >> runTime >> priority;
/* construct i'th element of the array */
        process[i].newNode(processID, arrivalTime, runTime, priority);
    }
    processesFile.close();
/* end of reading from file */

    int time=0;
    bool CPUBusy=false;
    node* currentProcess=new node;
    int processIndex=0;
    list RQ;

    while(processIndex<numProcesses||!RQ.IsEmpty()||CPUBusy==true){
        if (processIndex<numProcesses) {
            if (process[processIndex].ArrivalTime == time) {
                RQ.SortedInsert(&RQ.head,&process[processIndex]);
                processIndex++;
            }
        }
        if (CPUBusy==true){
            currentProcess->RunTime=currentProcess->RunTime-1;
        }
        if (currentProcess->RunTime==0){
            cout<<currentProcess->ProcessID<<endl;
            CPUBusy=false;
        }
        if (CPUBusy==false && !RQ.IsEmpty()){
            currentProcess=RQ.MinPrio();
            CPUBusy=true;
        }
        time=time+1;
    }
    cout<< RQ.node_visited_insert<< " nodes visited for insertion" << endl;
    cout<< RQ.node_visited_search<< " nodes visited for searching" << endl;
    cout<< RQ.node_visited_search<< " nodes visited for deleting" << endl;
}
