#pragma once

#include "resource.rc"
// btCls ��ȭ �����Դϴ�.

class btCls : public CDialog
{
	DECLARE_DYNAMIC(btCls)

public:
	btCls(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~btCls();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_SEARCH_WINDOW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
};
