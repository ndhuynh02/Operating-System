#include "common.h"

void initialize(queue &q) {
    q.clear();
    q.push_back(24);
    q.push_back(3);
    q.push_back(6);
}

/*************************************************************/
void initializeWT(queue &q) {
    q.clear();
    q.push_back(9);
    q.push_back(0);
    q.push_back(3);
}

/*************************************************************/
int main(int argc, char *argv[]) {
    queue q, wt, rwt;
    initialize(q);
    initializeWT(wt);
    cout << "SJF CPU scheduler!\n\n";
    SJFWT(q, rwt);
    if (wt == rwt) cout << "Correct!!!!" << endl;
    else cout << "Incorrect!!!!" << endl;
    return 0;
}
/*************************************************************/
