#include "common.h"

/******************************************************/
void initializeQueue(queue &q) {
    q.push_back(1 << 14);
    q.push_back(1024);
    q.push_back(4096);
    q.push_back(4 * 1024 * 1024);
    q.push_back(12 * 1024 * 1024);
    uint64_t l = (uint64_t) 4 * 1024 * 1024 * 1024L;
    q.push_back(l);
}

/******************************************************/
void initializeTestCase(loc_queue &tc) {
    tc.push_back(CLocation(4, 20));
    tc.push_back(CLocation(0, 1028));
    tc.push_back(CLocation(1, 8));
    tc.push_back(CLocation(1025, 8));
    tc.push_back(CLocation(3075, 16));
    tc.push_back(CLocation(-1, -1));
}

/******************************************************/
int main() {
    queue inq;
    loc_queue outq, tc;
    int block_size, pointer_size = 4;
    uint64_t file_size;

    block_size = 1 << 12; //4KB
    file_size = 178987234;//bytes
    initializeQueue(inq);
    std::cout << "Linked list disk allocation!\n";
    LLA(inq, block_size, pointer_size, file_size, outq);
    initializeTestCase(tc);
    if (tc == outq)cout << "Correct!" << endl;
    else cout << "Incorrect!" << endl;
}
/******************************************************/
