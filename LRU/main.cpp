#include "common.h"

/*************************************************************/
void initializeTestCase(repqueue &tc) {
    tc.push_back(PageRep('1', 1, -1));
    tc.push_back(PageRep('2', 1, -1));
    tc.push_back(PageRep('3', 1, -1));
    tc.push_back(PageRep('4', 1, -1));
    tc.push_back(PageRep('1', 0, -1));
    tc.push_back(PageRep('2', 0, -1));
    tc.push_back(PageRep('5', 2, '3'));
    tc.push_back(PageRep('1', 0, -1));
    tc.push_back(PageRep('2', 0, -1));
    tc.push_back(PageRep('3', 2, '4'));
    tc.push_back(PageRep('4', 2, '5'));
    tc.push_back(PageRep('5', 2, '1'));
}
/*************************************************************/
#ifndef MANUAL_COMPARE

bool compareQueues(repqueue &l, repqueue &r) {
    if (l.size() != r.size())return false;
    for (size_t i = 0; i < l.size(); i++) {
        if (l[i]._pageNo != r[i]._pageNo
            || l[i]._status != r[i]._status
            || l[i]._swapPage != r[i]._swapPage)
            return false;
    }
    return true;
}

#endif

/*************************************************************/
int main(int argc, char *argv[]) {
    repqueue wt, tc;
    string refstr = string("123412512345");

    printf("LRU Page replacement!\n");
    initializeTestCase(tc);
    LRU(refstr, 4, wt);
#ifndef MANUAL_COMPARE
    if (compareQueues(tc, wt)) cout << "Correct" << endl;
    else cout << "Incorrect" << endl;
#else
    if(tc==wt)cout << "Correct" <<endl;
    else  cout << "Incorrect" <<endl;
#endif
    return 0;

}
/*************************************************************/
