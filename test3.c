#define _CRT_SECURE_NO_WARNINGS//可以不报不安全 加在源文件的第一行

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);//scanf_s不具有跨平台性，是VS特有代码   不安全
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//		return 0;
//}

//常量   1.字面常量   2.const修饰常量  3.#define定义的标识符常量    4.枚举常量
//int main()
//{
//	int num = 4；
//		return 0;//字面常量
//}

//int main()
//{
//	const int num = 4;//常属性 const修饰的常变量
//	printf("%d\n", num);
//		num = 8;
//		printf("%d\n", num);
//			return 0;
//}
//es1F 常变量属性
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
//	//int arr[n] = { 0 };//n是变量但是又有常属性，所以我们说N是常变量
//	n = 10;
//	return 0;
//}

//#define 定义的标识常变量
//#define MAX 10
//int main()
//{
//	int num[MAX] = { 0 };
//	printf("%d\n",MAX);
//	return 0;
//}

//枚举常量---可以被一一列举的值
//es1
//enum Sex //枚举关键   ---enum
//{
//MALE,
//FEMALE,
//SECERT
//};
////MALE,FEMALE,SECERT---枚举常量
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECERT);
//	return 0;
//}

//es2
//enum Color //枚举关键   ---enum
//{
//	RED,
//	YELLOW,
//	BLUE
//};
////MALE,FEMALE,SECERT---枚举常量
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	//BLUE = 6;
//	return 0;
//}

//字符串+转义字符+注释

//字符串  由双引号引起来的一串字符称为字符串字面值 简称字符串
//ASCII 编码    
//int main()
//{
//	char arr1[] = "abc";//数组
//	//"abc"---'a','b','c','\0'---'\0'字符串的结束标志
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
//			printf("%d\n", strlen(arr2));//strlen--string length--计算字符串长度
//			return 0;
//}

//转义字符   转变原来的意思es\0就是一个转义字符

//es1  \n
//int main()
//{
//	printf("abc\n");
//		return 0;
//}

//es2
//int main()
//{
//	/*printf("c:\test\32\test.c");*///\t 水平制表符    \?在书写连续多个问号使用，防止被解析为3个字母
//	//      \' 用于表示字符常量'     \"用于表示一个字符串内的双引号   \\用于表示一个单斜杠    \a警告字符，蜂鸣    \b退格符    \t 水平制表符
//	/*printf("c:\\test\\32\\test.c\n");
//	printf("%c\n",'\'');
//	printf("%s\n","\""); 
//	printf("%c\n", "\"");*/
//	printf("%d\n", strlen("c:\test\32\test.c"));//  \nnn   nnn表示1~3个八进制数字  es:\130   //\32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	printf("%c\n", '\32');
//	printf("%d\n", strlen("c:\\test\\32\\test.c"));
//	//\Xnn  nn表示2个十六进制
//	printf("%c\n", '\x61');
//		return 0;
//}

//注释  1.有不需要的   2.标志意义
int main()
{
	int input = 0;
	printf("有钱\n");
	printf("想有钱吗？(1/0)>:");
	scanf("%d", &input);
	if (input == 1)
		printf("make money\n");
	else
		printf("be poor\n");
	return 0;

}