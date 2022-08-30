#include "common.h"
#include <algorithm>

void SSTF(queue &q, int curpos, queue &oq, unsigned int &distance) {
    distance = 0;

    queue requestList(q);   // create a copy of q

    if (find(requestList.begin(), requestList.end(), curpos) == requestList.end()) {
        requestList.push_back(curpos);
    }

    // sort list ascending
    sort(requestList.begin(), requestList.end());
    // delete duplicate elements
    requestList.erase( unique( requestList.begin(), requestList.end() ), requestList.end() );

    int curIndex = find(requestList.begin(), requestList.end(), curpos) - requestList.begin();
    int preIndex = -1;
    while (requestList.size() != 1) {
        preIndex = curIndex;
        if (curIndex == 0) {
            curIndex++;
        } else if (curIndex == requestList.size() - 1) {
            curIndex--;
        } else {
            if (abs(requestList[curIndex] - requestList[curIndex - 1])
                > abs(requestList[curIndex] - requestList[curIndex + 1])) {
                curIndex++;
            } else {
                curIndex--;
            }
        }
        // remove previous disk
        oq.push_back(requestList[curIndex]);
        distance += abs(requestList[curIndex] - requestList[preIndex]);
        requestList.erase(remove(requestList.begin(), requestList.end(), requestList[preIndex]), requestList.end());

        if (preIndex < curIndex) {
            curIndex--;
        }
    }
}