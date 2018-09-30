#include "record.h"

int CRecord::compair(CRecord *pother)
{
	for(unsigned n=0;n<3;n++)
	{
		if(in[n]>pother->in[n])return -1;
		if(in[n]<pother->in[n])return +1;
	}
	return 0;
}
void CRecord::copy(CRecord *from)
{
	memcpy(this,from,sizeof(CRecord));
}
void CRecord::view()
{
	printf("in[%d,%d,%d],out[%d],prob[%f]\n",in[0],in[1],in[2],out,prob);
}
