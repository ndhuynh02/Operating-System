#include "common.h"

/* NGUYỄN ĐĂNG HUỲNH - 20020295 */

struct Process {
    int number, burst, waiting;

    Process(int number, int burst) : number(number), burst(burst) {
        waiting = 0;
    }
};

void SJFWT(queue &q, queue &wt) {
    vector<Process> vt;
    vt.reserve(q.size()); // initialize vector's size

    // add elements in vector
    for (int i = 0; i < q.size(); i++) {
        vt.emplace_back(Process(i+1, q[i]));
    }

    // sort in burst time
    sort(vt.begin(), vt.end(), [](const Process &p1, const Process &p2) {
        return p1.burst < p2.burst;
    });

    // calculate waiting time
    for (int i = 1; i < q.size(); i++) {
        vt[i].waiting = vt[i - 1].waiting + vt[i - 1].burst;
    }

    // sort in process number
    sort(vt.begin(), vt.end(), [](const Process &p1, const Process &p2) {
        return p1.number < p2.number;
    });

    // add results in wt
    for (auto &i: vt) {
        wt.push_back(i.waiting);
    }
}