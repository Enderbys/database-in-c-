#include "package.h"

CPackage::CPackage()
{
	left=0;
	right=0;
	pRecord=0;
}
CPackage::~CPackage()
{
	if(left)
		delete left;
	if(right)
		delete right;
	if(pRecord)
		delete pRecord;
}
CRecord *CPackage::store(CRecord *pRec)
{
	if(pRecord==0)
	{
		pRecord=new CRecord;
		pRecord->copy(pRec);
		return pRecord;
	}
	int comp=pRec->compair(pRecord);
	if(comp>0)
	{
		if(!left)
			left=new CPackage;
		return left->store(pRec);

	}else if(comp<0)
	{
		if(!right)
			right=new CPackage;
		return right->store(pRec);
	}else
	{
		pRecord->copy(pRec);
		return pRecord;
	};
}
void CPackage::view()
{
	if(left)
		left->view();
	pRecord->view();
	if(right)
		right->view();
}
