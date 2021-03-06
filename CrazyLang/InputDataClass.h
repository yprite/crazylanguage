
#pragma once
#include "resource.h"
#include "afxwin.h"

// InputDataClass 대화 상자입니다.

class InputDataClass : public CDialog
{
	DECLARE_DYNAMIC(InputDataClass)

public:
	InputDataClass(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~InputDataClass();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_INPUTDATACLASS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.


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
