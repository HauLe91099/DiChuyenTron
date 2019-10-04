#pragma once
class Hinh
{
public:
	virtual void ve(CClientDC *pdc);
	virtual int tronghinh(CPoint p1);
	virtual void dichuyenlen();
	virtual void dichuyenxuong();
	virtual void dichuyentrai();
	virtual void dichuyenphai();
	virtual void Trondichuyenlen(CClientDC *pDC);
	virtual void Trondichuyenxuong(CClientDC *pDC);
	virtual void Trondichuyentrai(CClientDC *pDC);
	virtual void Trondichuyenphai(CClientDC *pDC);
	Hinh(void);
	~Hinh(void);
};

