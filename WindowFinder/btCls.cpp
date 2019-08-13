// btCls.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "WindowFinder.h"
#include "btCls.h"
//#include "resource.rc"

// btCls 대화 상자입니다.

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


// btCls 메시지 처리기입니다.

void btCls::OnBnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	OnCancel();
}

void btCls::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	OnOK();
}
