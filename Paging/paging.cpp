#include "common.h"

void Access(queue &r, addr_queue &q) {
    for (auto & i : r) {
        if (i._page >= pTableSize) {
            q.push_back(-2);
        } else if (log2(i._offset * 1.0) >= (PAGEBITS * 1.0)) {
            q.push_back(-1);

        } else {
            q.push_back(pTable[i._page] * pow(2, PAGEBITS) + i._offset);
        }
    }
}
