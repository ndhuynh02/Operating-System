#include "common.h"

bool SafetyAlgorithm() {
    // Work = Available
    for (int i = 0; i < NTT_RESOURCE_N; i++) {
        Work[i] = Available[i];
    }

    // Finish = False for all i = 0...n-1
    for (int i = 0; i < NTT_PROCESS_M; i++) {
        Finish[i] = 0;
    }

    for (int i = 0; i < NTT_PROCESS_M; i++) {
        if (Finish[i] == 0) {
            bool flag = 1;
            for (int j = 0; j < NTT_RESOURCE_N; j++) {
                if (Need[i][j] > Work[j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                for (int j = 0; j < NTT_RESOURCE_N; j++) {
                    Work[j] += Allocation[i][j];
                }
                Finish[i] = 1;
                i = -1;
            }
        }
    }

    for (int i = 0; i < NTT_PROCESS_M; i++) {
        if (Finish[i] == 0) return 0;
    }
    return 1;
}

