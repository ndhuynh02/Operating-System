#include "common.h"
//////////////////////////////////////////////////////////////////////////
int pTable[]={4,5,45,39,58,18};
int pTableSize=6;
void initialize(queue &q)
{
	q.clear();
	q.push_back(CRef(0,824));
	q.push_back(CRef(4,2048));
	q.push_back(CRef(7,3));
	q.push_back(CRef(2,512));
	q.push_back(CRef(1,918));
}
/*************************************************************/
void initializeTestCase(addr_queue &q)
{
	q.clear();
	q.push_back(262968);
	q.push_back(3803136);
	q.push_back(-2);
	q.push_back(2949632);
	q.push_back(328598);
}
/*************************************************************/
int main(int argc, char* argv[])
{
	queue q;
	addr_queue aq,tq;
	initializeTestCase(tq);
	initialize(q);
	printf("Page memory allocation!\n\n");
	Access(q,aq);
	if(aq==tq) cout << "Correct!" << endl;
	else       cout << "Incorrect!" << endl;
	return 0;
}
/*************************************************************/

