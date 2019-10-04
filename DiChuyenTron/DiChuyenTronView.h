
// DiChuyenTronView.h : interface of the CDiChuyenTronView class
//

#pragma once
#include"HCN.h"
#include"Hinh.h"
#include"Tron.h"
#include"NutBam.h"

class CDiChuyenTronView : public CView
{
protected: // create from serialization only
	CDiChuyenTronView();
	DECLARE_DYNCREATE(CDiChuyenTronView)

// Attributes
public:
	CDiChuyenTronDoc* GetDocument() const;

// Operations
public:
	NutBam trai,phai,len,xuong,khung1;
	Tron ht1;
	CClientDC *pdc;
	int chon;

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDiChuyenTronView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in DiChuyenTronView.cpp
inline CDiChuyenTronDoc* CDiChuyenTronView::GetDocument() const
   { return reinterpret_cast<CDiChuyenTronDoc*>(m_pDocument); }
#endif

