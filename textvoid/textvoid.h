
// textvoid.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CtextvoidApp: 
// �йش����ʵ�֣������ textvoid.cpp
//

class CtextvoidApp : public CWinApp
{
public:
	CtextvoidApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CtextvoidApp theApp;