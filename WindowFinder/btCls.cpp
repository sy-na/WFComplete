// btCls.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "WindowFinder.h"
#include "btCls.h"
//#include "resource.rc"

// btCls ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(btCls, CDialog)

btCls::btCls(CWnd* pParent /*=NULL*/)
	: CDialog(btCls::IDD, pParent)
{

}

btCls::~btCls()
{
}

void btCls::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(btCls, CDialog)
	ON_BN_CLICKED(IDCANCEL, &btCls::OnBnClickedCancel)
	ON_BN_CLICKED(IDOK, &btCls::OnBnClickedOk)
END_MESSAGE_MAP()


// btCls �޽��� ó�����Դϴ�.

void btCls::OnBnClickedCancel()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	OnCancel();
}

void btCls::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	OnOK();
}
