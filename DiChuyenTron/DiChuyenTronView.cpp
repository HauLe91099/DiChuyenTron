
// DiChuyenTronView.cpp : implementation of the CDiChuyenTronView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "DiChuyenTron.h"
#endif

#include "DiChuyenTronDoc.h"
#include "DiChuyenTronView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDiChuyenTronView

IMPLEMENT_DYNCREATE(CDiChuyenTronView, CView)

BEGIN_MESSAGE_MAP(CDiChuyenTronView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDiChuyenTronView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CDiChuyenTronView construction/destruction

CDiChuyenTronView::CDiChuyenTronView()
{
	// TODO: add construction code here
	khung1.thietlap(0, 0, 161, 50);
	trai.thietlap(0, 0, 80, 50);
	trai.chu = CString("SangTrai");
	phai.thietlap(81, 0, 161, 50);
	phai.chu = CString("SangPhai ");
	len.thietlap(161, 0, 241, 50);
	len.chu = CString("DiLen");
	xuong.thietlap(241, 0, 321, 50);
	xuong.chu = CString("DiXuong ");
	ht1.thietlap(100,250,200,350);
	chon =  0;
}

CDiChuyenTronView::~CDiChuyenTronView()
{
}

BOOL CDiChuyenTronView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDiChuyenTronView drawing

void CDiChuyenTronView::OnDraw(CDC* /*pDC*/)
{
	CDiChuyenTronDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	pdc = new CClientDC(this);
	khung1.ve(pdc);
	trai.ve(pdc);
	phai.ve(pdc);
	len.ve(pdc);
	xuong.ve(pdc);
	ht1.ve(pdc);
	// TODO: add draw code for native data here
}


// CDiChuyenTronView printing


void CDiChuyenTronView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CDiChuyenTronView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDiChuyenTronView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDiChuyenTronView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CDiChuyenTronView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDiChuyenTronView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CDiChuyenTronView diagnostics

#ifdef _DEBUG
void CDiChuyenTronView::AssertValid() const
{
	CView::AssertValid();
}

void CDiChuyenTronView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDiChuyenTronDoc* CDiChuyenTronView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDiChuyenTronDoc)));
	return (CDiChuyenTronDoc*)m_pDocument;
}
#endif //_DEBUG


// CDiChuyenTronView message handlers


void CDiChuyenTronView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	if (trai.tronghinh(point) == 1)
	{
		chon = 1;
		ht1.Trondichuyentrai(pdc);
	}
	if (phai.tronghinh(point) == 1)
	{
		chon = 2;
		ht1.Trondichuyenphai(pdc);
	}
	if (len.tronghinh(point) == 1)
	{
		chon = 3;
		ht1.Trondichuyenlen(pdc);
	}
	if (xuong.tronghinh(point) == 1)
	{
		chon = 4;
		ht1.Trondichuyenxuong(pdc);
	}
	CView::OnLButtonUp(nFlags, point);
}
