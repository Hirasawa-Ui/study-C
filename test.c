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
//int main()
//{
//	printf("%d\n", sizeof(char));//
//	printf("%d\n", sizeof(short));//
//	printf("%d\n", sizeof(int));//
//	printf("%d\n", sizeof(long));//
//	printf("%d\n", sizeof(long long));//
//	printf("%d\n", sizeof(float));//
//	printf("%d\n", sizeof(double));//
//	return 0;
//}
//int main()
//{
//	short age = 20;//向内存申请两个字节=16bit位,存放20
//	float weight = 95.6;//float 向内存申请4个字节=32bit位存放小数
//
//	return 0;
//}




//全局变量和局部变量
//int num2 = 20;//全局变量-定义在代码块（{})之外的变量
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块（{}）内的变量
//
//		return  0;
//}

//全局变量和局部变量的同时存在
//int a = 100;
//int main()
//{
//	int a = 10;
//	//局部变量和全局变量的名字建议不要相同-容易误会，产生bug
//	//当局部变量和全局变量的名字相同的时候，局部变量优先
//	printf("%d\n", a);
//		return 0;
//}


//局部变量和全局变量使用范围es
//int main()
//{
//	int a = 10;
//}
//printf("%d\n", a);
//return 0;   //局部变量不能在全局使用


int a = 10;
int main()
{
	printf("%d\n", a);
	return 0;
}//全局变量可以在局部使用