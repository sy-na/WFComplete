#pragma once

#include "resource.rc"
// btCls 대화 상자입니다.

class btCls : public CDialog
{
	DECLARE_DYNAMIC(btCls)

public:
	btCls(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~btCls();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_DIALOG_SEARCH_WINDOW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
};
