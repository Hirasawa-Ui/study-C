#define _NO_SAFETY_WORNINGS 

#include <stdio.h>
#include <string.h>


//Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 1;
//	int max = 0;
//	/*if (num1 > num2)
//		printf("较大值是num1");
//	else
//		printf("较大值是num2");
//	return 0;*/
//	max = Max(num1, num2);
//	printf("%d\n", max);
//		return 0;
//}


//~对一个数的二进制按位取反
//int main()
//{
//	int a = 0;
//	int c = 1;
//	int d = -1;
//	int e = ~c;
//	int f = ~d;
//	int b = ~a;
//	printf("%d\n", ~a);
//	printf("%d\n", b);
//	printf("%d\n", e);
//	printf("%d\n", f);
//	原码、反码、补码 原码符号为不变，其他位取反得到反码    反码加1得到补码
//	负数在内存中存储时，存储的是二进制的补码   二进制的最高位是正负码
//	00000000000000000000000000
//	11111111111111111111111111
//	
//	return 0;
//}

//--  ++
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，在++
//	int c = ++a;
//	printf("a = %d,b =%d,c =%d\n", a, b,c);
//	return 0;
//}

//*间接访问操作符

//（类型）强制类型转换
//int main()
//{
//	int a = (int)3.14;///double -->int
//		return 0;
//}

//逻辑操作符
//&&逻辑与
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("c = %d\n", c);
//	return 0;
//}
////逻辑或||
//int main()
//{
//	int a = 0;
//	int b = 6;
//	int c = a || b;
//	printf("c= %d\n ",c);
//	return 0

//条件操作符   exp1?exp2:exp3
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("max = %d\n", max);
//	return 0;
//}

//逗号表达式

//下标引用[]，函数调用()，结构成员
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	return 0;
//}
//只要是整数，内存中存储的都是二进制的补码
//正数---原码，反码，补码相同
//负数
//原码                     反码                      补码
//直接按照正负           原码的符号位不变           反码加一
//写出二进制序列         其他位取反   
//-2
//1000 0000 0000 0000 0000 0000 0000 0010  - 原码
//1111 1111 1111 1111 1111 1111 1111 1101  - 反码
//1111 1111 1111 1111 1111 1111 1111 1110  - 补码

//常见关键字
int main()
{
	int a = 10;//局部变量 - 自动变量 - auto被沈略
	//break 退出循环   externyinru 外部符号 register寄存器
}