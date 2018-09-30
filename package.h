#ifndef _PACKAGE
#define _PACKAGE
#include "record.h"
class CPackage
{
private:
	CRecord *pRecord;
	CPackage *left,*right;
public:
	CPackage();
	~CPackage();
	CRecord *store(CRecord *pRec);
	void view();
};

#endif
