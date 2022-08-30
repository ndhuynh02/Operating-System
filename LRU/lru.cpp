#include "common.h"
#include <algorithm>

void LRU(string refs, int nFrame, repqueue &wt) {
    vector<char> lru, running_process;
    // lru: control what process is kicked
    // running_process: what processes are in the frames

    for (char &ref: refs) {
        // if process is not running (not in frame)
        if (find(running_process.begin(), running_process.end(), ref) == running_process.end()) {
            // if all frames are not occupied
            if (running_process.size() < nFrame) {
                // push in result vector
                wt.push_back(PageRep(ref, 1, -1));

                running_process.push_back(ref);
                lru.push_back(ref);
            } else {
                // get process that will be swapped
                char kicked_process = lru[0];
                // delete the swapped process
                lru.erase(lru.begin());
                // insert new process in
                lru.push_back(ref);

                running_process.erase(remove(running_process.begin(), running_process.end(), kicked_process),
                                      running_process.end());
                running_process.push_back(ref);

                wt.push_back(PageRep(ref, 2, kicked_process));
            }
        } else {
            wt.push_back(PageRep(ref, 0, -1));
            lru.erase(remove(lru.begin(), lru.end(), ref), lru.end());
            lru.push_back(ref);
        }
    }
}