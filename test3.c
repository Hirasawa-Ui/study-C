#define _CRT_SECURE_NO_WARNINGS//���Բ�������ȫ ����Դ�ļ��ĵ�һ��

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);//scanf_s�����п�ƽ̨�ԣ���VS���д���   ����ȫ
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//		return 0;
//}

//����   1.���泣��   2.const���γ���  3.#define����ı�ʶ������    4.ö�ٳ���
//int main()
//{
//	int num = 4��
//		return 0;//���泣��
//}

//int main()
//{
//	const int num = 4;//������ const���εĳ�����
//	printf("%d\n", num);
//		num = 8;
//		printf("%d\n", num);
//			return 0;
//}
//es1F ����������
//int main()
//{
//	int n = 10;
//	int arr[n] = { 0 };
//	return 0;
//}
//es2F
//int main()
//{
//	const int n = 10;
//	//int arr[n] = { 0 };//n�Ǳ����������г����ԣ���������˵N�ǳ�����
//	n = 10;
//	return 0;
//}

//#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int num[MAX] = { 0 };
//	printf("%d\n",MAX);
//	return 0;
//}

//ö�ٳ���---���Ա�һһ�оٵ�ֵ
//es1
//enum Sex //ö�ٹؼ�   ---enum
//{
//MALE,
//FEMALE,
//SECERT
//};
////MALE,FEMALE,SECERT---ö�ٳ���
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECERT);
//	return 0;
//}

//es2
//enum Color //ö�ٹؼ�   ---enum
//{
//	RED,
//	YELLOW,
//	BLUE
//};
////MALE,FEMALE,SECERT---ö�ٳ���
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	//BLUE = 6;
//	return 0;
//}

//�ַ���+ת���ַ�+ע��

//�ַ���  ��˫������������һ���ַ���Ϊ�ַ�������ֵ ����ַ���
//ASCII ����    
//int main()
//{
//	char arr1[] = "abc";//����
//	//"abc"---'a','b','c','\0'---'\0'�ַ����Ľ�����־
//	//char arr2[] = { 'a','b','c',0 };
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//es

//int main()
//{
//	char arr1[] = "abc";
//		/*char arr2[] = { 'a','b','c' };*/
//		/*char arr2[] = { 'a','b','c',0 };*/
//		char arr2[] = { 'a','b','c','\0' };
//		printf("%d\n", strlen(arr1));
//			printf("%d\n", strlen(arr2));//strlen--string length--�����ַ�������
//			return 0;
//}

//ת���ַ�   ת��ԭ������˼es\0����һ��ת���ַ�

//es1  \n
//int main()
//{
//	printf("abc\n");
//		return 0;
//}

//es2
//int main()
//{
//	/*printf("c:\test\32\test.c");*///\t ˮƽ�Ʊ��    \?����д��������ʺ�ʹ�ã���ֹ������Ϊ3����ĸ
//	//      \' ���ڱ�ʾ�ַ�����'     \"���ڱ�ʾһ���ַ����ڵ�˫����   \\���ڱ�ʾһ����б��    \a�����ַ�������    \b�˸��    \t ˮƽ�Ʊ��
//	/*printf("c:\\test\\32\\test.c\n");
//	printf("%c\n",'\'');
//	printf("%s\n","\""); 
//	printf("%c\n", "\"");*/
//	printf("%d\n", strlen("c:\test\32\test.c"));//  \nnn   nnn��ʾ1~3���˽�������  es:\130   //\32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	printf("%c\n", '\32');
//	printf("%d\n", strlen("c:\\test\\32\\test.c"));
//	//\Xnn  nn��ʾ2��ʮ������
//	printf("%c\n", '\x61');
//		return 0;
//}

//ע��  1.�в���Ҫ��   2.��־����
int main()
{
	int input = 0;
	printf("��Ǯ\n");
	printf("����Ǯ��(1/0)>:");
	scanf("%d", &input);
	if (input == 1)
		printf("make money\n");
	else
		printf("be poor\n");
	return 0;

}