#define _hope_no_warnings

#include <stdio.h>

//变量的运算

//int main()
//{
//	////计算2数字的和
//	//int num1 = 0;
//	//int num2 = 0;
//	//int sum = 0;
//	////输入数据-使用输入函数scanf
//	//scanf("%d",&num1); //取地址符号 &
//	//sum = num1 + num2;
//	//printf("sum=%d\n", sum);
//	//	return 0;
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//		scanf_s("%d%d",&num1,&num2);
//		sum = num1 + num2;
//		printf("sum= %d\n",sum);
//		return 0;
//}

//变量作用域和生命周期
//作用域，程序设计的概念，通常来说，一段程序代码中所用到的名字并不总是有效的
//限定这个名字的可用性的代码范围就是这个名字的作用域（这个变量哪里可以用就是这个代码的作用域）


//es1
//int main()
//{
//	int num = 0;
//	printf("num = %d\n", num);
//		return 0;//变量num作用域在{}内
//}

//es2F
//int main()
//{
//	{
//		int num = 0; 
//	}
//	printf("num = %d\n", num);
//	return 0;//变量num作用域在子{}内
//}

//es3
//int main()
//{
//	{
//		int num = 0; 
//		printf("num = %d\n", num);
//	}
//	return 0;//变量num作用域在子{}内
//}

//es4
//int main()
//{
//	int num = 0;
//	{
//		printf("num = %d\n", num);
//	}
//	return 0;//变量num作用域在子{}内
//}

//全局变量的定义域
//int global = 2021;
//void test()
//{
//	printf("test()--%d\n",global);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}

//es1F 不同源文件调用变量
//int main()
//{
//	//未申明标识符
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//es2  全局变量的作用域是整个工程
//int main()
//{
//	//未申明标识符
//	extern int g_val;//声明extern外部符号
//	printf("g_val = %d\n", g_val);
//	return 0;
//}


//生命周期
//int a = 30;
//int main()
//{
//	int a = 20;
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//	return 0;//局部变量的生命周期进入作用域生命周期开始，出作用域生命周期借宿
//	             //全局变量的生命周期是：整个程序的生命周期
//}
//全局变量生命周期
int a = 30;
int main()
{
	int a = 20;
	{
		int a = 10;
		printf("a = %d\n", a);
	}
	printf("a = %d\n", a);
	return 0;//局部变量的生命周期进入作用域生命周期开始，出作用域生命周期借宿
				 //全局变量的生命周期是：整个程序的生命周期
}