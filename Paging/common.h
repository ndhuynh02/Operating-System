#ifndef COMMON_H
#define COMMON_H
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
/*****************************/
struct CRef{
public:
	int _page;
	int _offset; //in bytes

	CRef(int a,int d){
		_page=a;
		_offset=d; 
	}
};

typedef vector<CRef> queue;
typedef vector<int> addr_queue;
const int PAGEBITS=16;

extern int pTable[]; 	//Variable defined in main can be used in any module/.cpp files
extern int pTableSize;  //Variable defined in main can be used in any module/.cpp files

/*
INPUT: the reference queue where each item is a Cref
OUTPUT: the address queue where each item is corresponding address to the input queue
 + -2 if the page number is invalid
 + -1 if the offset is invalid
 + actual physical address (in bytes)
*/
void Access(queue &r, addr_queue &q);
#endif