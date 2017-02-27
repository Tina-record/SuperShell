#pragma once

#include <windows.h>
#include <stdio.h>
#include <map>
#include <string>
#include <vector>

#include <stdarg.h>

using std::map;
using std::string;
using std::vector;

enum ArgStyle
{
	INTEGERX=6,CHARX,STRINGX
};


struct argFormat
{
	ArgStyle	style;//arg Style
	int			value;
};

class SS
{
public:
	SS(void);
	~SS(void);

public:
	void call();//ִ�е���
	bool LoadLib(string libName);//���ؿ�
	void ayaInput();//�ʷ��������﷨����
	void getInput();

	bool tryBeLib(string x);//������Ϊһ����ȥ����,�ɹ�true
	bool tryBeFunc(string x);//������Ϊһ������ȥִ��

	FARPROC getFuncAddr(string x);//������ѯĳ������ȡ���ַ
	void getArgcs(string s);//���������
	void executeCode(FARPROC X);//ִ�г���
private:
	map<string,HMODULE> m_str_hm;		//lib�����
	vector<argFormat>   m_argVectorList;//�ʷ��������
	
	string m_input;

private:
	/*�ʷ��������ж�+����
	
	Execption:
	�����﷨
	������
	
	
	���Σ�����������˵�ǰ�ַ������������ָ�벢+1,Amazing��End����;
	*/
	bool IsEnd(char*);		//\0

	void IsSpace(char*);	//�ո�
	void IsNumber(char*,bool IsNeg=false);	//Number
	void IsNeg(char*);		//����
	void IsString(char*);


	//////////////////////////////////////////

	void Error(char* fmt,...);
	void Warning(char* fmt,...);
	void Execute_error(char *fmt, ...);
	void Handle_Exception(int stage,int level,char* fmt,va_list ap);


	/* ���󼶱� */
	enum e_ErrorLevel
	{
		LEVEL_WARNING,
		LEVEL_ERROR,
	};

	/* �����׶� */
	enum e_WorkStage
	{
		STAGE_COMPILE,
		STAGE_LINK,
	};
};

