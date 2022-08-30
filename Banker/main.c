#include "common.h"

int Available[NTT_RESOURCE_N];
int Work[NTT_RESOURCE_N];
bool Finish[NTT_PROCESS_M];
int Need[NTT_PROCESS_M][NTT_RESOURCE_N];
int Allocation[NTT_PROCESS_M][NTT_RESOURCE_N];
int Max[NTT_PROCESS_M][NTT_RESOURCE_N];
int Request[NTT_PROCESS_M][NTT_RESOURCE_N];

/////////////////////////////////////
void InitializeSafetyAlgorithm() {

    //Allocation
    Allocation[0][0] = 0;
    Allocation[0][1] = 1;
    Allocation[0][2] = 0;

    Allocation[1][0] = 2;
    Allocation[1][1] = 0;
    Allocation[1][2] = 0;

    Allocation[2][0] = 3;
    Allocation[2][1] = 0;
    Allocation[2][2] = 2;

    Allocation[3][0] = 2;
    Allocation[3][1] = 1;
    Allocation[3][2] = 1;

    Allocation[4][0] = 0;
    Allocation[4][1] = 0;
    Allocation[4][2] = 2;


    //Max
    Max[0][0] = 7;
    Max[0][1] = 5;
    Max[0][2] = 3;

    Max[1][0] = 3;
    Max[1][1] = 2;
    Max[1][2] = 2;

    Max[2][0] = 9;
    Max[2][1] = 0;
    Max[2][2] = 2;

    Max[3][0] = 2;
    Max[3][1] = 2;
    Max[3][2] = 2;

    Max[4][0] = 4;
    Max[4][1] = 3;
    Max[4][2] = 3;


    //
    Available[0] = 3;
    Available[1] = 3;
    Available[2] = 2;

    //Need
    Need[0][0] = 7;
    Need[0][1] = 4;
    Need[0][2] = 3;

    Need[1][0] = 1;
    Need[1][1] = 2;
    Need[1][2] = 2;

    Need[2][0] = 6;
    Need[2][1] = 0;
    Need[2][2] = 0;

    Need[3][0] = 0;
    Need[3][1] = 1;
    Need[3][2] = 1;

    Need[4][0] = 4;
    Need[4][1] = 3;
    Need[4][2] = 1;
}
/*************************************************************/

/*************************************************************/
int main(int argc, char *argv[]) {
    printf("Banker Simulation program!\n");

    InitializeSafetyAlgorithm();
    if (SafetyAlgorithm())
        printf("Safe state!\n");
    else printf("Not a safe state!\n");
    return 0;
}
/*************************************************************/

