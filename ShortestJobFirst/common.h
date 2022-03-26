#ifndef OPERATINGSYSTEMS_COMMON_H
#define OPERATINGSYSTEMS_COMMON_H

#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
typedef vector<int> queue;

/*
INPUT: the queue q is the queue with process duration (running time).
		for example q={4,5,6}: means P0, P1, and P2 has running time of 4,5, and 6, correspondingly
OUTPUT: the queue wt containing the waiting time of P0, P1, and P2 (process order is preserved)
*/
void SJFWT(queue &q, queue &wt);

#endif //OPERATINGSYSTEMS_COMMON_H
