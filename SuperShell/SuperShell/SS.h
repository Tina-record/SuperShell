#pragma once

#include <windows.h>
#include <stdio.h>
#include <map>
#include <string>
using std::map;
using std::string;

class SS
{
public:
	SS(void);
	~SS(void);

public:
	void call();//ִ�е���
	void LoadLib(string libName);//���ؿ�
	void ayaInput();//�ʷ��������﷨����
	

private:
	map<string,HMODULE> m_str_hm;

};

