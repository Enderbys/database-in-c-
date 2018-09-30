#ifndef _RECORD
#define _RECORD
#include <stdio.h>
#include <string.h>
class CRecord
{
public:
	int in[3];
	int out;
	double prob;
	int compair(CRecord *pother);
	void copy(CRecord *from);
	void view();
	
};
#endif
