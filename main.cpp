#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "record.h"
#include "database.h"

CPackage package;

int main(int argc,char *argv[])
{
	CRecord r[]={	{1,2,3,4,0.1},
					{1,2,4,5,0.2},
					{1,4,2,6,0.3},
					{2,3,1,7,0.4},
					{1,2,3,9,0.5}
				};
	for(int n=0;n<5;n++)
		package.store(&r[n]);

	CRecord p;
	for(int n=0;n<100;n++)
	{
		p.in[0]=rand()%10;
		p.in[1]=rand()%10;
		p.in[2]=rand()%10;
		p.out=rand()%10;
		p.prob=rand()/double(RAND_MAX);
		package.store(&p);
	}

	package.view();
	printf("\nEnd\n");
}
