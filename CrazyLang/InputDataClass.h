
#pragma once
#include "resource.h"
#include "afxwin.h"

// InputDataClass ��ȭ �����Դϴ�.

class InputDataClass : public CDialog
{
	DECLARE_DYNAMIC(InputDataClass)

public:
	InputDataClass(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~InputDataClass();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_INPUTDATACLASS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.


	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedInputbtn();
	CBitmap inputbackground;
	CEdit InputDataEdit;
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	virtual BOOL OnInitDialog();
	CBitmapButton InputOkbutton;
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
//	virtual void OnOK();
	virtual void OnOK();
};