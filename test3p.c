#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//循环语句
//int main()
//{
//	int line = 0;
//	printf("成为程序员\n");
//	while (line < 20000)
//	{
//		printf("写一行代码;%d\n",line);
//			line++;
//	}
//	if(line>=20000)
//	printf("可以找到程序员工作\n");
//	return 0;
//}

//函数
//add(int x, int y)//自定义函数
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = add(num1, num2);
//	printf("sum =%d\n", sum);
//	sum = add(a, b);
//	printf("sum =%d\n", sum);
//	sum = add(2, 3);
//	printf("sum =%d\n", sum);
//
//	return 0;
//}

//数组
//int main()
//{
//	int a1[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组
//	//printf("%d\n", a1[4]);//下标的方式访问元素
//	int t = 0;
//	while (t < 10)
//	{
//		printf("%d\n", a1[t]);
//		t++;
//	}
//	return 0;
//}

//操作符
//算术操作符+ - * / %
//int main()
//{
//	int a = 5/2;
//	int b = 5 % 2;//取模得余数
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//移位操作符 移动的是二进制位
//int main()
//{
//	int a = 1;
//	int b = 0;
//	b = a << 4;//左移4位
//	printf("%d\n", b);
//	return 0;
//}

//位操作符   &  ^ |    操作二进制位  &按位与  ^按位异或    |按位或 
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//0 1 1 & 1 0 1  =0  0  1
//	int d = a | b;// 0 1 1 | 1 0 1 = 1  1  1
//	int e = a ^ b;//异或计算规则  相同位0  相异为1
//	b = a << 4;//左移4位
//	printf("%d\n", b);	
//			printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}


//赋值操作符 =  += -=   *=   /=  &=   |=   ^=   >>=    <<=