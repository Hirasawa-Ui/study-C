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
int main()
{
	int a = 10;
	int b = a++;//后置++，先使用，在++
	int c = ++a;
	printf("a = %d,b =%d,c =%d\n", a, b,c);
	return 0;
}