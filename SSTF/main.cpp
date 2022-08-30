#include "common.h"

void initializeInputQueue(queue &r) {
    r.push_back(98);
    r.push_back(183);
    r.push_back(37);
    r.push_back(122);
    r.push_back(14);
    r.push_back(124);
    r.push_back(65);
    r.push_back(67);
}

/*************************************************************/
void initializeTestCase(queue &r) {
    r.push_back(65);
    r.push_back(67);
    r.push_back(37);
    r.push_back(14);
    r.push_back(98);
    r.push_back(122);
    r.push_back(124);
    r.push_back(183);
}

/*************************************************************/
int main() {
    queue inqueue, outqueue, tc;
    int curpos = 53;
    unsigned int distance;
    initializeInputQueue(inqueue);
    initializeTestCase(tc);
    SSTF(inqueue, curpos, outqueue, distance);
    cout << "Total distance is: " << distance << endl;
    if (tc == outqueue && distance == 236)cout << "Correct" << endl;
    else cout << "Incorrect" << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
