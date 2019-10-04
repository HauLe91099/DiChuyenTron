#pragma once
#include "hinh.h"
class Tron :
	public Hinh
{
private:
	int x1, y1, x2, y2;
public:
	void thietlap(int mx1,int my1,int mx2,int my2);
	void ve(CClientDC *pDC);
	void dichuyenlen();
	void dichuyenxuong();
	void dichuyentrai();
	void dichuyenphai();
	void Trondichuyenlen(CClientDC *pDC);
	void Trondichuyenxuong(CClientDC *pDC);
	void Trondichuyentrai(CClientDC *pDC);
	void Trondichuyenphai(CClientDC *pDC);
	Tron(void);
	~Tron(void);
};

