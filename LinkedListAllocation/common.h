#ifndef COMMON_H
#define COMMON_H

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

#ifdef linux
#include <inttypes.h>
#endif
using namespace std;

/*********************************/

class CLocation {
public:
    int _block;
    int _offset;

    CLocation(int b, int o) {
        _block = b;
        _offset = o;
    }

    bool operator==(const CLocation &rhs) const {
        return _block == rhs._block && _offset == rhs._offset;
    }
};

typedef vector<uint64_t> queue;
typedef vector<CLocation> loc_queue;

/*
INPUT: + the reference position queue: refs,
	   + the block size: block_size
	   + the file size: file_size
	   + the pointer size: pointer_size
OUTPUT: the location queue: wt corresponding to the input queue
	where each item in the queue will have the following values:
	+ valid reference: calculate the corresponding block and offset
	+ invalid referecnce: block_size=-1; offset=-1;

*/
void LLA(queue refs, int block_size, int pointer_size, uint64_t file_size, loc_queue &wt);

#endif
