>������Ʒ��������
>Discussion on design direction-Baidu or Google translate

##2017-03-16
1��ֻ��\0\r\n��Ҫ�ر���,��������Ҫ����.
�ϵĴ��뵼���޷����ַ����д���",��Ϊ����ת���ˡ�

2. ����һ���������棬���˴򿪳��������֪������������ʲô�ģ���ô����
3. ����ico������http://www.easyicon.net/569839-matte_white_square_icon_alphanumeric_letter_ss_icon.html
4. ���ϴ�һ��Relase��exe�������û�ֱ������ʹ�á�

##xxxx
��ɣ�
1. �ͷű���
2. ������Ϣ��ӡ

##2017-03-05
�������Ѿ�����ˡ�

�����˺ܶ����⣬��ͼȥ����_cdecl��_stdcl.ͨ������ESP�Ĵ���������������������ʱû�з������⣬���ǲ�һ���ȶ���

�����˲���BUG���޸���ʹ�õ�״̬��

�������Ѿ������ˡ�

��һ����
1. �ͷű�����
2. ������Ϣ�Ĵ�ӡ
3. wchar?
4. ���õĽṹ
5. ctrl+c�жϵĴ���

##2017-03-01
������ 0:59
���������¹��ܣ�
- String
- char: like 'a'
- ,	:�����ָ���

���ڿ�ִ�в���û����ɣ��������Ӿ�δ�ܲ��ԡ�

##2017-02-27
�����Ѿ�֧���������ݵĴ���
- \0
- Space
- Number(+Neg,-С��)

��Ҫ�����������ݵĴ���
- String
- char: like 'a'
- ,	:�����ָ���


�����:
0.�ֺ����������ʷ�����,
1.���״�����(����SCC������),
2.anaInput()�Ĳ�ֹ���.

���Ǵ���û�в���.

ִ�к�����Ҫ�Բ�������֧�֡�


##2017-02-25
���ڵ������Ҫ��һЩ����
1. �Ƿ�δ������Windows�������������ϵͳ����Ҫ�ع����﷨������ģ����أ�����ִ�С��Ƿ���Ҫ�麯���������ƣ�
2. �﷨��������̫�ң��Ƿ����С�����������жϵ�ǰ�Ƿ������֣��Ƿ����ַ���,��������ϣ��Ƿ�����ҿ����ļ�����Ŀ���ǻ�ϵġ�����Ϊ����������������ģ�黯��ƣ���Ϊģ�黯��ƿ���ͨ�����������á�
�����ǣ��������ˡ�-�����ŵ�������⣬����ʶ�����-����ʱ����Ҫ��һ�����������ֲſ��ԡ�����ΪSS��֧�����㣬���Բ��ᱻ�������ţ���ʱ����Ҫ��������ʶ����򣬸���������飬�����ô�ͳswtich ���� while����ĸ���ֻ�ܱ�¶��while�������ӽṹ:
```
bool f = false;
while()
{
	if(-)
	{f=true}
	else if(number)
	{if(f)......}

	++p;
}
```
��Ϊ�������������㹻��������ϣ�����ܸ���һЩ��
```
AnalysisNumber(char* p,bool negative=false);

AnalysisNegative()
{

AnalysisNumber(p,true)
};

while()
{
	if(-)
	
	AnalysisNumber(p);

	++p
}
```
��call������ if�����������ƺ��ܴ�

##2017-02-25
���ҽ��ܣ�
��ã��ҵ�������dalerkd,�������й���һֱ����������һ��������Windows������������ϵͳ�ܹ���Shell������ʹ����C�ļ�ʱ��������.�ǵģ�����һ��C����ʹ���ߡ���ʱ��ֻ����Ҫ����MessageBox()֮��ļ����飬ȴ��Ҫ�Ӵ�ı�����������������������ȻҲ��ĳЩ��ʱ������֧��SuperShell�������������������ƺ���������ʵ�ָ���Ĺ��ܡ�

��ϣ��SuperShell�����ʹ������ʹ���ܹ��㹻���ɣ���ʵ��c�����﷨�ĺ������á����ǵĲ���ϵͳ���Ѿ��ṩ�˺����Ĺ��ܣ�������Ҫ����ֻ�ǵ��������ѡ�
������֮ǰ�������ѵġ�

�Ҵ�δ��ƹ���������������Ϊ���������һ����������Ա�ؾ�֮·������Ŀ���㿪ʼ��

���ʹ��SuperShell�أ���ϣ����δ�����������·�ʽʹ�ã�
>ss MessageBoxA(0,"Hi","Title",0);
or
>ss ENTER
MessageBoxA(0,"Hi","Title",0);

�������ܿᣡ�ҽ������һ��һ��:)



Introduce myself ��

Hello, my name is dalerkd, I come from China, has been, I have a demand, in Windows or other operating system can be used in the Shell happy class C instant function call

Yes, I am a C language user. Sometimes you just need to call MessageBox () simple things like, but needs a huge compiler, I hate to do this, of course, this approach may some time compiler SuperShell support, but they seem to be more willing to realize more functions.

I hope that the design of SuperShell makes it easy to use it, only to achieve the function call C language grammar. We already have the function of the operating system, and all we have to do is call it.

But it was difficult before.

I've never designed a compiler, but I think it's a real programmer. This project starts from zero.

How to use SuperShell? I hope it can be used in the following ways:

```
>ss MessageBoxA (0, "Hi", "Title", 0);

//Or

>ss ENTER

MessageBoxA (0, "Hi", "Title", 0);
```
Look cool! I will finish it step by step:)

