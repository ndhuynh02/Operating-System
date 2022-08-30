#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////////////////////
#define NTT_RESOURCE_N 3
#define NTT_PROCESS_M 5

extern int Available[NTT_RESOURCE_N];
extern int Work[NTT_RESOURCE_N];
extern bool Finish[NTT_PROCESS_M];
extern int Need[NTT_PROCESS_M][NTT_RESOURCE_N];
extern int Allocation[NTT_PROCESS_M][NTT_RESOURCE_N];
extern int Max[NTT_PROCESS_M][NTT_RESOURCE_N];
extern int Request[NTT_PROCESS_M][NTT_RESOURCE_N];

/*
Input: the global variables as listed above
Outout: + true: if the system is in safe state.
        + false: if the system is NOT in safe state.
*/
bool SafetyAlgorithm();

#endif