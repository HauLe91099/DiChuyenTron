#pragma once
#include "hinh.h"
class HCN :
	public Hinh
{
private: 
	int x1, y1, x2, y2;
public:
	void thietlap(int x1, int y1, int x2, int y2);
	void ve(CClientDC *pdc);
	CPoint getA();
	CPoint getC();
	int tronghinh(CPoint p1);
	HCN(void);
	~HCN(void);
};

