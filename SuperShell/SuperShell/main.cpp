
#include "SS.h"
#include <windows.h>
#include <stdio.h>
#include <map>
#include <string>
using std::map;
using std::string;
/*
LoadLibrary("")
*/


int main()
{
	

	/*
	1. ���� LoadLibraryA��ִ�к�����
	2. LLA���룬�ж��Ƿ��и�DLL���ɹ���ӽ�map;
	3. ִ�к������룺����map�ҵ�������ַ����?Y:���ã�N:���ء�

	*/

	SS* p = new SS();
	p->getInput();

	delete(p);


}