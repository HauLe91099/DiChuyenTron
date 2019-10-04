#include "StdAfx.h"
#include "Tron.h"

void Tron::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	x2 = mx2;
	y1 = my1;
	y2 = my2;
}
void Tron::ve(CClientDC *pDC)
{
	pDC->Ellipse(x1,y1,x2,y2);
}
void Tron::dichuyenlen()
{
	y1 -= 10; y2 -= 10;
}
void Tron::dichuyenxuong()
{
	y1 += 10; y2 += 10;
}
void Tron::dichuyentrai()
{
	x1 -= 10; x2 -= 10;
}
void Tron::dichuyenphai()
{
	x1 += 10; x2 += 10;
}
void Tron::Trondichuyenlen(CClientDC *pDC)
{
	CPen *pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CPen *oldpen;
	int i = 0;
	while (i < 10)
	{
		ve(pDC);
		Sleep(100);
		oldpen = pDC->SelectObject(pen);//chon but ve
		ve(pDC);
		dichuyenlen();
		pen = pDC->SelectObject(oldpen);
		i++;
		ve(pDC);
	}
}
void Tron::Trondichuyenxuong(CClientDC *pDC)
{
	CPen *pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CPen *oldpen;
	int i = 0;
	while (i < 10)
	{
		ve(pDC);
		Sleep(100);
		oldpen = pDC->SelectObject(pen);//chon but ve
		ve(pDC);
		dichuyenxuong();
		pen = pDC->SelectObject(oldpen);
		i++;
		ve(pDC);
	}
}
void Tron::Trondichuyentrai(CClientDC *pDC)
{
	CPen *pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CPen *oldpen;
	int i = 0;
	while (i < 10)
	{
		ve(pDC);
		Sleep(100);
		oldpen = pDC->SelectObject(pen);//chon but ve
		ve(pDC);
		dichuyentrai();
		pen = pDC->SelectObject(oldpen);
		i++;
		ve(pDC);
	}
}
void Tron::Trondichuyenphai(CClientDC *pDC)
{
	CPen *pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CPen *oldpen;
	int i = 0;
	while (i < 10)
	{
		ve(pDC);
		Sleep(100);
		oldpen = pDC->SelectObject(pen);//chon but ve
		ve(pDC);
		dichuyenphai();
		pen = pDC->SelectObject(oldpen);
		i++;
		ve(pDC);
	}
}
Tron::Tron(void)
{
}


Tron::~Tron(void)
{
}
