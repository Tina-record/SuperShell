// test.17.2.22.test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	std::string a = "LoadLibrary(\"Hi.dll\")";

	std::string::size_type index = a.find("(");
	//std::string b = a.erase(0,index+1);
	//index = a.find("\"");
	a.erase(index);
	return 0;
}

