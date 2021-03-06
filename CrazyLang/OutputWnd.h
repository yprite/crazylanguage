
#pragma once


#include "OutputRapDialog.h"
#include "BuildOoutput.h"

/////////////////////////////////////////////////////////////////////////////
// COutputList 창

class COutputList : public CListBox
{
// 생성입니다.
public:
	COutputList();

// 구현입니다.
public:
	virtual ~COutputList();

protected:
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	afx_msg void OnEditCopy();
	afx_msg void OnEditClear();
	afx_msg void OnViewOutput();
	
	DECLARE_MESSAGE_MAP()
};






class COutputDebugBox : public CListCtrl
{

public:
	COutputDebugBox();
public:
	virtual ~ COutputDebugBox();

public:
	afx_msg void OnCustomdrawList(NMHDR* pNMHDR, LRESULT* pResult);
	DECLARE_MESSAGE_MAP()
	
	
};

class COutputRapDialogbox : public CDialog
{


public :
	COutputRapDialogbox();
	


public:
	virtual ~COutputRapDialogbox();

public:
	DECLARE_MESSAGE_MAP();



	
	
};


class COutputWnd : public CDockablePane
{
// 생성입니다.
public:
	COutputWnd();

	void UpdateFonts();

	void FillBuildWindow();
	OutputRapDialog m_wndOutputDialog;
	COutputList m_wndOutputBuild;
	BuildOoutput m_wndOutputBuildCustom;



		
// 특성입니다.
protected:

	

	
	COutputList m_wndOutputDebug;
	COutputList m_wndOutputFind;
	COutputDebugBox m_wndOutputDebugBox;


protected:
	
	void FillDebugWindow();
	void FillFindWindow();
	void FillFindWindowDebugBox();
	void AdjustHorzScroll(CListBox& wndListBox);





// 구현입니다.
public:
	virtual ~COutputWnd();
	CMFCTabCtrl	m_wndTabs;

	void FillResult(CString Text);


protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnWindowPosChanging(WINDOWPOS* lpwndpos);
};

