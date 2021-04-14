#define _CRT_secure_no_warnings 1

#include <stdio.h>


//20
//55.5
//char-字符类型
//%d-打印整型
//%c-打印字符
//%f-打印浮点数字-打印小数
//%p-以地址的形式打印
//%x-打印16进制
//%o-...
//int main()
//{
	//char ch = 'A';//内存
	//printf("%c\n",ch);//%c-打印字符格式的数据    \n换行
	//short int --短整型 int-整型
	//int age = 20;
	//printf("%d\n",age);//%d--打印整型十进制数据

	//long a = 100;
	//printf("%d\n", a);

	//float f = 5.115767860;
	//printf("%f\n", f);

	//double d = 3.141592635787;
	//printf("%lf\n", d);
	//return 0;
//}
int main()
{
	printf("%d\n", sizeof(char));//
	printf("%d\n", sizeof(short));//
	printf("%d\n", sizeof(int));//
	printf("%d\n", sizeof(long));//
	printf("%d\n", sizeof(long long));//
	printf("%d\n", sizeof(float));//
	printf("%d\n", sizeof(double));//
	return 0;
}