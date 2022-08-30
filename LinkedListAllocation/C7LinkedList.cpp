#include "common.h"

void LLA(queue refs, int block_size, int pointer_size, uint64_t file_size, loc_queue &wt) {
    int data_size = block_size - pointer_size;
    for (uint64_t it : refs) {
        if (it >= file_size) {
            wt.push_back(CLocation(-1, -1));
        } else {
            wt.push_back(CLocation(it / data_size, it % data_size + 4));
        }
    }
}