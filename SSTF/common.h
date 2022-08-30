#ifndef COMMON_H
#define COMMON_H
#include <string>
#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
typedef vector<int> queue;
/*
INPUT: + the queue q is the queue of request (in term of cylinder number)
	   + The current position of the header
OUTPUT: + the queue oq containing order of served request
	    + the total distance the head has to move
*/
void SSTF(queue& q, int curpos, queue& oq, unsigned int& distance);
#endif

